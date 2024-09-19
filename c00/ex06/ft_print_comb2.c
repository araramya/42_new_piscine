/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:15:16 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/05 17:17:07 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_pos_int(int n)
{
	char	chdigit1;
	char	chdigit2;

	chdigit1 = n / 10 + '0';
	chdigit2 = n % 10 + '0';
	write(1, &chdigit1, 1);
	write(1, &chdigit2, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_pos_int(num1);
			write(1, " ", 1);
			ft_print_pos_int(num2);
			if (num1 != 98 || num2 != 99)
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}

////TEST
//int main()
//{
//	ft_print_comb2();
//
//}
