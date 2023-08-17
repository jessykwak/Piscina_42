/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:52:38 by freduard          #+#    #+#             */
/*   Updated: 2023/06/13 17:08:22 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

int		main(void)
{
	char src[] = "C is fine!";
	char dest[] = "Swimming is great!";
	unsigned int n;

	n = 13;

	printf("Antes\n\tsrc: %s\n\tdes: %s\n", src, dest);

	ft_strncpy(dest, src, n);

	printf("Depois\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}