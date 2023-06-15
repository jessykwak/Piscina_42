/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:58:27 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:22:26 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	position;

	position = 0;
	if (dest == 0)
	{
		return ('\0');
	}
	while (position < n && src[position] != '\0')
	{
		dest [position] = src[position];
		position++;
	}
	dest[position] = '\0';
}

#include <stdio.h>

int	main(void)
{
	char	src[9] = "batata";
	char	dest[9];

	ft_strncpy(dest, src, 4);
	printf("dest string is %s\n", dest);
	return (0);
}
