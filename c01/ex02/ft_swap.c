/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:07:11 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/09 20:54:27 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

//TEST #include <unistd.h>
//int main ()
//{
//	 int a = 5;
//	 int b = 6;
//	 int* pa = &a;
//	 int* pb = &b;
//	 printf("Before Swap: pa: %i, pb: %i\n", *pa, *pb);
//	 ft_swap(pa, pb);
//	 printf("After Swap: pa: %i, pb: %i\n", *pa, *pb);
//}
