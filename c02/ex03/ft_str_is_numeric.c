/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:53:54 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/18 23:51:28 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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
//	printf("%d\n", ft_str_is_numeric("485654654654654"));
//	printf("%d\n", ft_str_is_numeric("4856fp54654654654"));
//	printf("%d\n", ft_str_is_numeric(""));
//}
