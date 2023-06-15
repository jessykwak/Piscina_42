/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:04:28 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/13 18:15:30 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_length;
	int	i;

	i = 0;
	dest_length = ft_str_length(dest);
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	teste[12] = "alisson";
	strcat(teste, " marcos");
	printf("%s\n", teste);
}
