/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:07:18 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/07 20:06:15 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	fir;

	fir = 0;
	while (fir < size)
	{
		if (tab[fir] > tab[fir + 1])
		{
			aux = tab[fir];
			tab[fir] = tab[fir + 1];
			tab[fir + 1] = aux;
			ft_sort_int_tab(&*tab, size);
		}
		fir++;
	}
}

int	main(void)
{
	int	size;
	int	list[5] = {3, 99, 4, 85, 1983};
	int	i;

	size = sizeof(list) / sizeof(list[0]);
	i = 0;
	while (i < size)
	{
		printf("[%d]", list[1]);
		i++;
	}
	ft_sort_int_tab(&*list, size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("[%d]", list[i]);
		i++;
	}
	return (0);
}
