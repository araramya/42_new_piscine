/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:36:43 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/14 17:43:09 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
//TEST
//#include <stdio.h>
//int main()
//{
//	char str1[] = "asdasADASDdasdas";
//	char str2[] = "asdsadas78978";
//	printf("%i\n", ft_str_is_alpha(str1));
//	printf("%i\n", ft_str_is_alpha(str2));	
//}
