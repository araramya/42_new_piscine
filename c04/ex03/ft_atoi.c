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
  int sign;
  int result;
  int i;

  sign = 1;
  result = 0;
  i = 0;
  while (ft_is_space(str[i]))
    i++;
  while(str[i] == '-' || str[i] == '+')
  {
    if(str[i] == '-')
      sign *= -1;
    i++;
  }
  while(str[i])
  {
    if(str[i] >= '0' && str[i] <= '9')
    {
      result *= 10;
      result += str[i] - '0';
    }
    else
      return (result * sign);
    i++;
  }
  return (result * sign);
}

#include <stdio.h>
int main ()
{
	char number[] = "-------1234asdasdas123123";
	printf("%d\n", ft_atoi(number));
}
