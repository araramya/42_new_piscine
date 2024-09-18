/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:04:26 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/18 23:33:57 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_into_hex(char c)
{
	char	*hex;
	int		first_digit;
	int		second_digit;	
	int		i;

	i = 0;
	hex = "0123456789abcdef\0";
	first_digit = c / 16;
	second_digit = c % 16;
	write(1, &hex[first_digit], 1);
	write(1, &hex[second_digit], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			write(1, "\\", 1);
			ft_into_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
//test
//int main()
//{
//	char a[] = "Coucou\ntu vas bien ?";
//	ft_putstr_non_printable(a);
//}
