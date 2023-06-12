/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_logic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:31:04 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:03:20 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str);
char	*find_number(char *input);
void	two_digit(char *input);
void	three_digit(char *input);
void	four_digit(char *input);
void	five_digit(char *input);
void	six_digit(char *input);
void	seven_digit(char *input);
void	eight_digit(char *input);
void	nine_digit(char *input);
void	ten_digit(char *input);
void	number_logic(char *input);
void	ft_putstr(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	numbers_together(int digit, char *input)
{
	if (digit == 1)
		ft_putstr(find_number(input));
	else if (digit == 2)
		two_digit(input);
	else if (digit == 3)
		three_digit(input);
	else if (digit == 4)
		four_digit(input);
	else if (digit == 5)
		five_digit(input);
	else if (digit == 6)
		six_digit(input);
	else if (digit == 7)
		seven_digit(input);
	else if (digit == 8)
		eight_digit(input);
	else if (digit == 9)
		nine_digit(input);
	else if (digit == 10)
		ten_digit(input);
}

void	number_logic(char *input)
{
	int	digit;

	if (input[0] == '0')
		number_logic(++input);
	else
	{
		digit = ft_strlen(input);
		numbers_together(digit, input);
	}
}

/* int	main(void)
{
	number_logic("4294967296");
	return (0);
} */