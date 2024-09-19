/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:23:34 by aaramyan          #+#    #+#             */
/*   Updated: 2024/09/09 20:50:28 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp_num;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp_num = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp_num;
			}
			i++;
		}
		size--;
	}
}

//TEST
//#include <stdio.h>
//int main()
//{
//	int tab[] = {6, 7, 8, 1, 9, 8};
//	int *ptab = tab;
//
//	printf("Before function Call\n");
//	int i = 0;
//	while(i < 6)
//	{
//		printf("%i ", ptab[i]);
//		i++;
//	}
//	printf("\n");
//	ft_sort_int_tab(ptab, 6);
//	printf("Aftere function Call\n");
//	i = 0;
//	while(i < 6)
//	{
//		printf("%i ", ptab[i]);
//		i++;
//	}
//}
