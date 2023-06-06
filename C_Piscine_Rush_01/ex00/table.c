/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:57:33 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/04 15:45:45 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int linhavalida(int table[][4], int linha, int num) {
    int col = 0;
    while (col < 4) {
        if (table[linha][col] == num) {
            return 0; // falso
        }
        col++;
    }
    return 1; // vdd
}

int colunavalida(int table[][4], int col, int num) {
    int linha = 0;
    while (linha < 4) {
        if (table[linha][col] == num) {
            return 0; // falso
        }
        linha++;
    }
    return 1; // vdd
}

void	stackblock(int table[][4])
{
	int linha = 0;
    while (linha < 4) 
	{
        int col = 0;
        while (col < 4) 
		{
            int num = 1 + (linha + col) % 4;
            while (!linhavalida(table, linha, num) || !colunavalida(table, col, num)) 
			{
            num = (num % 4) + 1;
            }
            table[linha][col] = num;
            col++;
        }
        linha++;
    }
}

void	position(int table[][4])
{
	int linha = 0;
    while (linha < 4) 
	{
        int col = 0;
        while (col < 4) 
		{
        	ft_putchar(table[linha][col]);
        	col++;
        }
        ft_putchar('\n');
        linha++;
	}
}

int main() 
{
    int table[4][4];

    stackblock(table);
    position(table);

    return 0;
}