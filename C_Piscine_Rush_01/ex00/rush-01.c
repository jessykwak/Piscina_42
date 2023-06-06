/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:57:11 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/04 15:02:43 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	position(char view, char tabuleiro);

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	count;
	int	*view;

	view = malloc(16 * sizeof(int));
	i = 0;
	j = 1;
	count = 0;
	while (i < 31)
	{
		if (((argv[j][i] <= '4') && (argv[j][i] >='1')) || (argv[j][i] == ' '))
		{
			if (argv[j][i] != ' ')
			{
				view[count] = argv[j][i] + '0';
				count ++;
			}
		}
		else
		{
			ft_putchar("E");
			ft_putchar("R");
			ft_putchar("R");
			ft_putchar("O");
			return (1);
		}
		i ++;
	}
	if (count != 15)
	{
		ft_putchar("E");
		ft_putchar("R");
		ft_putchar("R");
		ft_putchar("O");
		return (1);
	}
	return (0);
}
