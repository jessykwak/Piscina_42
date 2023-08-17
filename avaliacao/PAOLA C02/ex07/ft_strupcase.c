/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:45:09 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:44:56 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 97 && str[position] <= 122)
			str[position] = str[position] - 32;
		position++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	palavra[] = "Lola";

	printf ("%s\n", palavra);
	ft_strupcase(palavra);
	printf ("%s\n", palavra);
	return (0);
}
