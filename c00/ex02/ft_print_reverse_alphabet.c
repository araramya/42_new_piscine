/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:52:40 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/03 16:52:53 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch_start;
	char	ch_end;

	ch_start = 'z';
	ch_end = 'a';
	while (ch_start >= ch_end)
	{
		write(1, &ch_start, 1);
		ch_start--;
	}
}

//TEST
//int main ()
//{
// ft_print_reverse_alphabet();
//}
