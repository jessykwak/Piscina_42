/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:48:35 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/06/15 13:42:31 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0')
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
	char dest[] = "mikro";
	char src[] = "kosmos";

	ft_strcat(dest, src);
	printf("Resultado: %s\n", dest);
	return (0);
}
