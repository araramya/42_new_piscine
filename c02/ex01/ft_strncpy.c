/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:29:17 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/14 17:34:24 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//Test
//#include <stdio.h>
//int main()
//{
//	char str1[] = "Hello";
//	char str2[] = "Arsenikum";
//	ft_strncpy(str2, str1, 3);
//	printf("%s\n", str2);
//}
