/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:50:12 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 00:56:07 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

//test
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s1[] = "abcdef";
//	char s2[] = "abcdefg";
//	char s3[] = "abcdef";
//	char s4[] = "abcdeg";
//
//	printf("%d\n", ft_strcmp(s1, s2));
//	printf("%d\n", strcmp(s1, s2));
//	printf("%d\n", ft_strcmp(s3, s4));
//	printf("%d\n", strcmp(s3, s4));
//	printf("%d\n", ft_strcmp(s1, s3));
//	printf("%d\n", strcmp(s1, s3));
//}
