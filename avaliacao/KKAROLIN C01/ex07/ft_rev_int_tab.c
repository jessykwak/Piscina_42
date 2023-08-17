/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:37:50 by kkarolin          #+#    #+#             */
/*   Updated: 2023/06/13 13:14:08 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	reverse;
	int	order;

	reverse = 0;
	size--;
	while (reverse < size)
	{
		order = tab[reverse];
		tab[reverse] = tab[size];
		tab[size] = order;
		reverse ++;
		size--;
	}
}

#include	<stdio.h>

int	main(void)
{
	int	array[10] = {6, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int	k;

	k = 0;
	ft_rev_int_tab(array, 10);
	while (k < 10)
	{
		printf("%d", array[k]);
		if (k < 10)
			printf(" ");
		k++;
	}
	return (0);
}

