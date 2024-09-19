/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:54:12 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/03 16:59:42 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ch_start;
	char	ch_end;

	ch_start = '0';
	ch_end = '9';
	while (ch_start <= ch_end)
	{
		write(1, &ch_start, 1);
		++ch_start;
	}
}

//TEST
//int	main()
//{
//  ft_print_numbers();
//	return 0;
//}
