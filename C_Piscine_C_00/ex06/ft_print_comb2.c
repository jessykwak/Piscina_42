/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:32:26 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/05/31 19:24:48 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    dupla_x(void)
{
	int duplax[2];

	duplax[0] = '0';
	while (duplax[0] <= '9')
	{
		if (duplax[0] < duplax[1] )
		{
			ft_putchar(duplax[0]);
			ft_putchar(duplax[1]);
		}
		duplax[1]++;
	}
	duplax[0]++;
}

void    dupla_y(void)
{
	int duplay[2];

	duplay[0] = '0';
	while (duplay[0] <= '9')
	{
		if (duplay[0] < duplay[1] )
		{
			ft_putchar(duplay[0]);
			ft_putchar(duplay[1]);;
		}
		duplay[1]++;
	}
	duplay[0]++;
}

void ft_print_comb2(void)
{
    while (dupla_x <= 98 && dupla_x != dupla_y)
    {
        dupla_x();
        ft_putchar(" ");
        dupla_y();
        if (dupla_x <= 98)
        {
            ft_putchar(",");
            ft_putchar(" ");
        }
    }
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
