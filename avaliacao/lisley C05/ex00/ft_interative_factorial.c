/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:07:28 by livieira          #+#    #+#             */
/*   Updated: 2023/06/15 12:47:56 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 4! = 1 * 2 * 3 * 4
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}


#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}