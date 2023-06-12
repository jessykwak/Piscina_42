/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_rules_part_two.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:59:21 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:03:26 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char			*find_number(char *input);
void			number_logic(char *input);
unsigned int	ft_atoi(char *str);
void			ft_putstr(char *str);

void	seven_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	number_logic(aux);
	ft_putstr(find_number("1000000"));
	number_logic(++input);
}

void	eight_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	aux[1] = input[1];
	number_logic(aux);
	ft_putstr(find_number("1000000"));
	number_logic(input += 2);
}

void	nine_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	aux[1] = input[1];
	aux[2] = input[2];
	number_logic(aux);
	ft_putstr(find_number("1000000"));
	number_logic(input += 3);
}

void	ten_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	number_logic(aux);
	ft_putstr(find_number("10000000"));
	number_logic(++input);
}
