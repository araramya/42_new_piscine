/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:36:27 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/09 21:07:39 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//TEST
//#include <stdio.h>
//int main()
//{	
//	char *str = "Hi My Name is string";
// 	printf("str_count = %i\n", ft_strlen(str));
//}
