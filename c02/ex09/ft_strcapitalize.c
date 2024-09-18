/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:32:50 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 00:24:33 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ! (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& ! (str[i - 1] >= '0' && str[i - 1] <= '9')
			&& ! (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

//#include <stdio.h>
//int main ()
//{
//	char str[] = "salut, commen ? 42mots quarante-deux; cinquante+et+un";
//	ft_strcapitalize(str);
//	printf("%s\n", str);
//}
