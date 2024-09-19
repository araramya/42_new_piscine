/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:17:21 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/08 21:18:40 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//TEST
//#include <stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 3;
//	int div_mem;
//	int mod_mem;
//	int *div = &div_mem;
//	int *mod = &mod_mem;
//	ft_div_mod(a, b, div, mod);
//	printf("div = %i\nmod = %i\n", *div, *mod);
//
//}
