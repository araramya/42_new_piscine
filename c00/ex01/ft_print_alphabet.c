/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:48:09 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/07 13:22:56 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	ch_start;
	int	ch_end;

	ch_start = 'a';
	ch_end = 'z';
	while (ch_start <= ch_end)
	{
		write(1, &ch_start, 1);
		++ch_start;
	}
}

//TEST
//int main ()
//{
//ft_print_alphabet();
//}
