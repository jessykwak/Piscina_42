/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:48:51 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/06/15 13:44:00 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0' && c < nb)
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (*dest);
}

#include <stdio.h>

int	main(void)
{
	char dest[] = "winter";
	char src[] = "bear";
	unsigned int n;

	n = 3;
	ft_strncat(dest, src, n);
	printf("%s", dest);
	return (0);
}
