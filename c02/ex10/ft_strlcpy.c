/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:44:57 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/18 21:02:01 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

//Test
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[] = "Hellow";
//	char b[] = "cpy";
//	char c[] = "Hellow";
//	char d[] = "cpy";
//
//	ft_strlcpy(b, a, 3);
//	printf("%s\n", b);
//	strlcpy(c, d, 3);
//	printf("%s\n", b);
//}
