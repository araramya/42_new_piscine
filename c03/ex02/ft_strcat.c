/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:09:26 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 01:29:16 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//test
//#include <stdio.h>
//#include <string.h>
//int main ()
//{
//	char dest[100] = "Hey I am Destination";
//   	char src[] = " Hey I am soruce";
//	printf("%s\n", strcat(dest, src));
//	printf("%s\n", ft_strcat(dest, src));
//
//}
