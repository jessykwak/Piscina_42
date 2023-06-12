/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:15:00 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:37:43 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (count < size && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	if (count >= size)
	{
		while (src[count] != '\0')
		{
			count++;
		}
	}
	dest[count] = '\0';
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* int	main(void)
{
	char			src[] = "yikes, what's happening?!";
	unsigned int	n;
	char			*dest;

	n = 8;
	dest = (char *)malloc(sizeof(char) * n);
	printf("%s\n", src);
	printf("%i\n", ft_strlcpy(&*dest, &*src, n));
	printf("%li\n", sizeof(dest));
	printf("%s\n", dest);
	return (0);
	free(dest);
}
 */