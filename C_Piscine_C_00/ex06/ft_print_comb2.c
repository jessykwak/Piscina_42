/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:32:26 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/06 10:46:38 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_division(int num)
{
	int	ans;

	ans = (num / 10) + '0';
	ft_putchar(ans);
}

void	ft_modulo(int num)
{
	int	ans;

	ans = (num % 10) + '0';
	ft_putchar(ans);
}

void	ft_print_comb2(void)
{
	int	fir;
	int	sec;

	fir = 0;
	while (fir < 99)
	{
		sec = fir + 1;
		while (sec <= 99)
		{
			ft_division(fir);
			ft_modulo(fir);
			ft_putchar(' ');
			ft_division(sec);
			ft_modulo(sec);
			sec++;
			if (fir != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		fir++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/