/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:53:06 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/07 15:51:03 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	fir;
	int	las;

	fir = 0;
	las = size - 1;
	while (fir < (size / 2))
	{
		aux = tab[las];
		tab[las] = tab[fir];
		tab[fir] = aux;
		fir++;
		las--;
	}
}

/* int	main(void)
{
	int	size;
	int	list[7] = {1, 2, 3, 4, 5, 6, 7};
	int	i;

	size = sizeof(list) / sizeof(list[0]);
	i = 0;
	while (i < size)
	{
		printf("[%d]", list[i]);
		i++;
	}
	ft_rev_int_tab(&*list, size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("[%d]", list[i]);
		i++;
	}
	return (0);
}
*/