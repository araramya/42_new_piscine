/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:27:28 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 20:31:00 by aaramyan         ###   ########.fr       */
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

//test
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", ft_strlen("Wish you Welll in HEEEEELLLLLL"));
//	printf("%lu\n", strlen("Wish you Welll in HEEEEELLLLLL"));
//}
