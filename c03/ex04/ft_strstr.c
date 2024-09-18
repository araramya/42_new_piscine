/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:40:31 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 01:53:47 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

//test
//#include <stdio.h>
//#include <string.h>
//#include <xlocale.h>
//int main ()
//{
//	char *largestring = "Foo Bar Baz";
//    char *smallstring = "Bar";
//    char *ptr;
//	ptr =  strstr(largestring, smallstring);
//	printf("%p\n", ptr);
//	ptr = ft_strstr(largestring, smallstring);
//	printf("%p\n", ptr);
//}
