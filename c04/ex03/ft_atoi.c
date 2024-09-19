/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:48:47 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 23:10:08 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if (c == '\t' || c =='\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while(str[i])
	{
		if (ft_is_space(str[i]))
			i++;
		if(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				sign++;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			
			result *= 10;
			result += (str[i] - '0');
			i++;
		}
		i++;

	}
		if (sign % 2 != 0 )
			result *= -1;

	return result;

}

#include <stdio.h>
int main ()
{
	char number[] = "------1234asdasdas123123";
	printf("%d\n", ft_atoi(number));
}
