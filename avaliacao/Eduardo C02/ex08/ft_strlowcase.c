/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:07:22 by freduard          #+#    #+#             */
/*   Updated: 2023/06/13 17:17:31 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "C IS FINE! SWaaIMMIN123G IS GREAT!";
    printf("Antes: %s\n", str);
	ft_strlowcase(str);
	printf("Depois: %s\n", str);
	return (0);
}
