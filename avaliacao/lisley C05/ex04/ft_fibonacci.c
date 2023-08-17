/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:11:50 by livieira          #+#    #+#             */
/*   Updated: 2023/06/15 12:51:43 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = index;
	if (i < 0)
		return (-1);
	if (i == 0)
		return (0);
	if (i == 1)
		return (1);
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}