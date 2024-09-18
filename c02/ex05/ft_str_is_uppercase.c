/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:53:54 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/18 23:59:08 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

//test
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", ft_str_is_uppercase("asdasASDSDdasdasd"));
//	printf("%d\n", ft_str_is_uppercase("ADSADSADSADS4"));
//	printf("%d\n", ft_str_is_uppercase("ADSDASDADASD"));
//	printf("%d\n", ft_str_is_uppercase(""));
//}
