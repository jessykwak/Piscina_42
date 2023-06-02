/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:39:59 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/02 16:21:27 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_divisoes(int num)
{
	int	res;

	res = (num / 10) + '0';
	ft_putchar(res);
}

void	ft_modulo(int num)
{
	int	res;

	res = (num % 10) + '0';
	ft_putchar(res);
}

void	recursive(int num)
{
	if (num > 0)
}

void	ft_putnbr(void)
{
	int	pri;
	int	seg;

	pri = 0;
	while (pri < 99)
	{
		seg = pri + 1;
		while (seg <= 99)
		{
			ft_divisoes(pri);
			ft_modulo(pri);
			ft_putchar(' ');
			ft_divisoes(seg);
			ft_modulo(seg);
			seg++;
			if (pri != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		pri++;
	}
}
