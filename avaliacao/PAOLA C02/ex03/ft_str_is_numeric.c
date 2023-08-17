/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:52:27 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:26:28 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!((str[position] >= 48 && str[position] <= 57)))
			return (0);
		position++ ;
	}
	return (1);
}

#include<stdio.h>
int	main(void)
{
	char	str_null[] = "";
	char	str_letters[] = "LOLA";
	char	str_only_nbs[] = "17218354";
	char	str_let_nbs[] = "lola";

	printf("empty string returns %d\n", ft_str_is_numeric(str_null));
	printf("string with letter returns %d\n", ft_str_is_numeric(str_letters));
	printf("string only numbers returns %d\n", ft_str_is_numeric(str_only_nbs));
	printf("string let. + numb. returns %d\n", ft_str_is_numeric(str_let_nbs));
}
