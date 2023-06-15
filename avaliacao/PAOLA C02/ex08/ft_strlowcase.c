/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:26:14 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:35:16 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 65 && str[position] <= 90)
		str[position] = str[position] + 32;
		position++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char palavra[] = "LoLa";

	printf("%s\n", palavra);
	ft_strlowcase(palavra);
	printf ("%s\n", palavra);
	return (0);
}
