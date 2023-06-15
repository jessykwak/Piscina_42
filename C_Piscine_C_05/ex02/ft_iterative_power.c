/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:09:48 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/15 16:15:26 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power > 0)
	{
		while (power > 0)
			ans = ans * nb;
	}
	return (ans);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(4, 2));
	return (0);
}