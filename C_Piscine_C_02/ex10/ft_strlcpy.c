/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:15:00 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 20:55:27 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	index = 0;
	if (size > 0)
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
	}
	dest[index] = '\0';
	return (count);
}

int	main(void)
{
	char			src[] = "aaaaaaaa";
	unsigned int	n;
	char			dest[] = "bbbbbbbbbbb";

	n = 5;
	printf("%s\n", src);
	printf("%i\n", ft_strlcpy(dest, src, n));
	printf("%s\n", dest);
	return (0);
}
