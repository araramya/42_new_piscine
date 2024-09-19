/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:19:54 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/08 21:29:23 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

//TEST
//#include <stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 3;
//	printf("Before Call: a = %i, b = %i\n", a, b);
//	ft_ultimate_div_mod(&a, &b);
//	printf("After Call: a = %i, b = %i\n", a, b);
//
//}
