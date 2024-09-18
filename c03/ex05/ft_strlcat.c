/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 01:54:38 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 02:08:12 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	result = 0;
	while (dest[i])
		i++;
	while (src[result])
		result++;
	if (size <= i)
		result += size;
	else
		result += i;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);
}
//test
//#include <stdio.h>
//#include <string.h>
//int main() {
//    char dest1[30] = "Hello, ";
//    char dest2[30] = "Hello, ";  // Same initial content as dest1
//    char src[] = "world!";
//    unsigned int size = 15;  // Buffer size to test
//
//    // Call the original strlcat function
//    unsigned int result_original = strlcat(dest1, src, size);
//    // Call your custom ft_strlcat function
//    unsigned int result_custom = ft_strlcat(dest2, src, size);
//
//    // Print the results of the original and custom functions
//    printf("Original strlcat result: %u, dest: '%s'\n", 
//    result_original, dest1);
//    printf("Custom ft_strlcat result: %u, dest: '%s'\n", 
//    result_custom, dest2);
//
//    return 0;
//}
