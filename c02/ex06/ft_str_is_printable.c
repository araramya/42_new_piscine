/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:01:03 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/19 00:09:23 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}

//test
//#include <stdio.h>
//int main()
//{
//	printf("%d\n",ft_str_is_printable("adasdasd"));
//	printf("%d\n",ft_str_is_printable("44545654645"));
//	printf("%d\n",ft_str_is_printable("AD S AD A SDSDAADS"));
//	printf("%d\n",ft_str_is_printable("\n"));
//	printf("%d\n",ft_str_is_printable(""));
//}
