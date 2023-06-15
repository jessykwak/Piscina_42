/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:23:26 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:44:43 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	position;

	position = 0;
	while (src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}
	dest[position] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	src[30] = {"ashdashd"};
	char	dest[2];
	printf("A string original eh %s \n", src);
	ft_strcpy(dest, src);
	printf("A string destino eh %s \n", dest);
}
