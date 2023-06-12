/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_rules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:31:04 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:03:23 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char			*find_number(char *input);
void			number_logic(char *input);
unsigned int	ft_atoi(char *str);
void			ft_putstr(char *str);

void	two_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	if (ft_atoi(input) > 20)
	{
		aux[0] = input[0];
		aux[1] = '0';
		aux[2] = '\0';
		ft_putstr(find_number(aux));
		number_logic(++input);
	}
	else
	{
		ft_putstr(find_number(input));
	}
}

void	three_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	number_logic(aux);
	ft_putstr(find_number("100"));
	number_logic(++input);
}

void	four_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	number_logic(aux);
	ft_putstr(find_number("1000"));
	number_logic(++input);
}

void	five_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	aux[1] = input[1];
	number_logic(aux);
	ft_putstr(find_number("1000"));
	number_logic(input += 2);
}

void	six_digit(char *input)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 10);
	aux[0] = input[0];
	aux[1] = input[1];
	aux[2] = input[2];
	number_logic(aux);
	ft_putstr(find_number("1000"));
	number_logic(input += 3);
}
