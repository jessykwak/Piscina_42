/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:16:20 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/15 15:24:36 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 0 && nb - 1 != 0)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}