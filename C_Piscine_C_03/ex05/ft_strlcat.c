/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:34:01 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/14 19:36:28 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	index;

	lendest = ft_strlen(dest);
	index = 0;
	if (size <= lendest)
		return (size + ft_strlen(src));
	while (src[index] && ((lendest + index) < (size - 1)))
	{
		dest[lendest + index] = src[index];
		index++;
	}
	dest[lendest + index] = '\0';
	return (ft_strlen(dest));
}

#include <stdio.h>

int	main(void)
{
	char dest[16] = "to com fome";
	char src[13] = " quero leite";

	printf("%i", ft_strlcat(dest, src, 10));
	printf("\n%s", dest);
	return (0);
}
