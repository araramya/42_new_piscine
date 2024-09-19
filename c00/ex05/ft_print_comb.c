/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:16:49 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/04 20:14:06 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ch_digits( char ch_digit1,
		char ch_digit2,
		char ch_digit3)
{
	write(1, &ch_digit1, 1);
	write(1, &ch_digit2, 1);
	write(1, &ch_digit3, 1);
}

void	ft_print_comb(void)
{
	char	ch_digit1;
	char	ch_digit2;
	char	ch_digit3;

	ch_digit1 = '0';
	while (ch_digit1 <= '7')
	{
		ch_digit2 = ch_digit1 + 1;
		while (ch_digit2 <= '8')
		{
			ch_digit3 = ch_digit2 + 1;
			while (ch_digit3 <= '9')
			{
				ft_print_ch_digits(ch_digit1, ch_digit2, ch_digit3);
				if (ch_digit1 != '7' || ch_digit2 != '8' || ch_digit3 != '9')
				{
					write(1, ", ", 2);
				}
				ch_digit3++;
			}
			ch_digit2++;
		}
		ch_digit1++;
	}
}

//Test
//int main()
//{
//	ft_print_comb();
//}
