/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:25:03 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/09 20:22:49 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp_num;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp_num = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp_num;
		i++;
	}
}

//TEST
//#include <stdio.h>
//int main()
//{
//	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int *ptab = tab;
//	
//	printf("Before function Call:\n");
//	int i = 0;
//	int size = sizeof(tab) / sizeof(tab[0]);
//	while(i < size )
//	{
//		printf("%i ", ptab[i]);
//		i++;
//	}
//	printf("\n");
//	ft_rev_int_tab(ptab,  size);
//	printf("After function Call:\n");
//	i= 0;
//	while(i < size)
//	{
//		printf("%i ", ptab[i]);
//		i++;
//	}
//}
