/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:16:45 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/14 20:10:38 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (!(nb == -2147483648))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -1 * nb;
			ft_putnbr(nb / 10);
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		write(1, "-2147483648", 11);
	}
}
/*
int	main(void)
{
	ft_putnbr(-7085);
	return (0);
}
*/