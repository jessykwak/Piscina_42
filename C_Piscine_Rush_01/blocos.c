/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blocos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:12:58 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/04 15:13:57 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool isRowValid(int grid[][4], int linha, int num) {
    for (int col = 0; col < 4; col++) {
        if (grid[linha][col] == num) {
            return false;
        }
    }
    return true;
}

bool isColumnValid(int grid[][4], int col, int num) {
    for (int linha = 0; linha < 4; linha++) {
        if (grid[linha][col] == num) {
            return false;
        }
    }
    return true;
}

void fillGrid(int grid[][4]) {
    for (int linha = 0; linha < 4; linha++) {
        for (int col = 0; col < 4; col++) {
            int num = 1 + (linha + col) % 4;
            while (!isRowValid(grid, linha, num) || !isColumnValid(grid, col, num)) {
                num = (num % 4) + 1;
            }
            grid[linha][col] = num;
        }
    }
}

void printGrid(int grid[][4]) {
    for (int linha = 0; linha < 4; linha++) {
        for (int col = 0; col < 4; col++) {
            printf("%d ", grid[linha][col]);
        }
        printf("\n");
    }
}

int main() {
    int grid[4][4];

    fillGrid(grid);
    printGrid(grid);

    return 0;
}