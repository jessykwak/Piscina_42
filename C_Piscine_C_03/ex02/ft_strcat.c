/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:11:39 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 18:55:05 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	count;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	count = 0;
	while (src[count] != '\0')
	{
		dest[index + count] = src[count];
		count++;
	}
	dest[index + count] = '\0';
	return (dest);
}

#include <stdio.h>

int	main()
{
	char str1[] = "aaaa";
	char str2[] = "bbbb";

	ft_strcat(str1, str2);
	printf("%s", str1);
	return (0);
}
