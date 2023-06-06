/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:52:10 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/06 11:05:39 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 7;
	printf("antes: %d, %d", a, b);
	printf("\n");
	ft_swap(&a, &b);
	printf("depois: %d, %d", a, b);
}
