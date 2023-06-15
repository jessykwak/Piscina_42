/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:53:10 by kkarolin          #+#    #+#             */
/*   Updated: 2023/06/13 13:04:05 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	laranja;
	int	uva;

	laranja = *a / *b;
	uva = *a % *b;
	*a = laranja;
	*b = uva;
}	


#include	<stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 14;
	b = 15;
	ft_ultimate_div_mod( &a, &b);
	printf("divisao: %d\n", a);
	printf("modulo: %d", b);
	return (0);
}

