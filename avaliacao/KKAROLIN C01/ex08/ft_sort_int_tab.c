/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:54:53 by kkarolin          #+#    #+#             */
/*   Updated: 2023/06/13 13:16:28 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	gol;
	int	h;

	h = 0;
	while (h < (size - 1))
	{
		if (tab[h] > tab[h + 1])
		{
			gol = tab[h];
			tab[h] = tab[h + 1];
			tab[h + 1] = gol;
			h = 0;
		}
		else
		{
			h++;
		}
	}
}

#include <stdio.h>

int	main(void)
{
	int	array[10] = {3,5,7,1,7,8,1,2,0,9};
	int	h;


	h = 0;
	ft_sort_int_tab(array, 10);
	while (h < 10)
	{
		printf("%d", array[h]);
		if (h < 10)
		{
			printf(" ");
		}
		h++;
	}
	return (0);
}

