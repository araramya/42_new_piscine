/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:57:02 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 01:09:10 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

//test
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[] = "hello";
//    char str2[] = "hellp";
//    unsigned int n = 4; // Number of characters to compare
//
//    // Call the standard strncmp function
//    int result_original = strncmp(str1, str2, n);
//    // Call your custom ft_strncmp function
//    int result_custom = ft_strncmp(str1, str2, n);
//
//    // Print the results
//    printf("Standard strncmp result: %d\n", result_original);
//    printf("Custom ft_strncmp result: %d\n", result_custom);
//}
