/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:12:07 by freduard          #+#    #+#             */
/*   Updated: 2023/06/13 17:04:33 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

int	main(void)
{
	char	source[] = "C is fine!";
	char	destin[50] = "Swimming is great!";

	printf("Antes:\n\tsource: %s\n\tdes: %s\n", source, destin);
	ft_strcpy(destin, source);
	printf("Depois:\n\tsource: %s\n\tdes: %s\n", source, destin);
	return (0);
}
