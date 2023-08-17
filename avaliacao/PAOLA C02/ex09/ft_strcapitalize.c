/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:51:26 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:36:44 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	position;
	int	to_up;
	int	c;

	position = 0;
	to_up = 1;
	while (str[position] != '\0')
	{
		c = str[position];
		if (to_up == 1 && (c >= 'a' && c <= 'z'))
		str[position] = c - 32;
		else if (to_up == 0 && (c >= 'A' && c <= 'Z'))
			str[position] = c + 32;
		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z'))
		to_up = 0;
		else
			to_up = 1;
		position ++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	palavra[] = "salut, comment tu vas ? 42mots @quarante-deux; !cinquante+et+un";

	printf("%s\n", palavra);
	ft_strcapitalize(palavra);
	printf("%s\n", palavra);
	return (0);
}
