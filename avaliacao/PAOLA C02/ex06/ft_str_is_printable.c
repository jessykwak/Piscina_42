/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:15:58 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:32:34 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!((str[position] >= 32 && str[position] <= 126)))
			return (0);
		position++;
	}
	return (1);
}

#include<stdio.h>
int	main(void)
{
	char	str_null[] = "";
	char	str_print[] = "UIREBG???***";
	char	str_nprint[] = "\f\n\n\n\n\n";
	char	str_print_nprint[] = "Non \vprin\ftable\n***";

	printf("null str: %d\n", ft_str_is_printable(str_null));
	printf("Str with print: %d\n", ft_str_is_printable(str_print));
	printf("Str with n print: %d\n", ft_str_is_printable(str_nprint));
	printf("Str print +nprint: %d\n", ft_str_is_printable(str_print_nprint));
}
