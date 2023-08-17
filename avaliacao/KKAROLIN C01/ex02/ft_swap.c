/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:00:04 by kkarolin          #+#    #+#             */
/*   Updated: 2023/06/13 13:01:06 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	base;

	base = *a;
	*a = *b;
	*b = base;
}


#include	<stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 12;
	ft_swap( &a, &b);
	printf("a: %d\nb: %d", a, b);
	return (0);
}

