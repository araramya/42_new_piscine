/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:21:03 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 01:39:18 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				j;
	unsigned int	i_nb;

	i = 0;
	j = 0;
	i_nb = 0;
	while (dest[i])
		i++;
	while (src[j] && (i_nb < nb))
	{
		dest[i] = src[j];
		i_nb++;
		j++;
		i++;
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
//	printf("%s\n", strncat(dest, src, 4));
//	printf("%s\n", ft_strncat(dest, src, 4));
//
//}
