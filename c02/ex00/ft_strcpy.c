/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:23:42 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/14 17:26:50 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//Test
//#include <stdio.h>
//int main()
//{
//	char str1[] = "Copy";
//	char str2[] = "Destination";
//
//	printf("%s\n", str1);
//	ft_strcpy(str1, str2);
//	printf("%s\n", str1);
//}
