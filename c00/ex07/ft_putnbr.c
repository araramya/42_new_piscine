/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:18:18 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/05 18:19:29 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		tmp;
	char	chdigit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	tmp = nb;
	if (tmp >= 10)
	{
		ft_putnbr(tmp / 10);
		chdigit = tmp % 10 + '0';
		write(1, &chdigit, 1);
	}
	else
	{
		chdigit = tmp % 10 + '0';
		write(1, &chdigit, 1);
	}
}

//TEST
//int main()
//{
//	ft_putnbr(-2147483648);
//	write(1, "\n", 1);
//	ft_putnbr(-42);
//	write(1, "\n", 1);
//	ft_putnbr(0);
//	write(1, "\n", 1);
//	ft_putnbr(42);
//	write(1, "\n", 1);
//	ft_putnbr(2147483647);
//	write(1, "\n", 1);
//}
