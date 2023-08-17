/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:16:45 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/15 13:22:27 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long aux;

	aux = nb;
	if (aux < 0)
	{
		ft_putchar('-');
		aux = -1 * aux;
		ft_putnbr(aux / 10);
	}
	else if (aux >= 10)
	{
		ft_putnbr(aux / 10);
	}
	ft_putchar((aux % 10) + '0');
}

int	main(void)
{
	ft_putnbr(-7085);
	return (0);
}
