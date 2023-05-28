/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazagli <bbazagli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:00:54 by bbazagli          #+#    #+#             */
/*   Updated: 2023/05/28 10:17:07 by bbazagli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	position(int x, int y, int row, int col)
{
	if ((row == 1 && col == 1) || (row == y && col == x))
	{
		ft_putchar('/');
	}
	else if ((row == 1 && col == x) || (row == y && col == 1))
	{
		ft_putchar('\\');
	}
	else if ((row == 1 && col < x) || (row == y && col < x) || (col == 1
			&& row < y) || (col == x && row < y))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	if (x >= 0 && y >= 0)
	{
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				position(x, y, row, col);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
