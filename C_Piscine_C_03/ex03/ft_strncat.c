/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:40:20 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 21:39:04 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index;
	unsigned int	count;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	count = 0;
	while (src[count] != '\0' && count < nb)
	{
		dest[index + count] = src[count];
		count++;
	}
	dest[index + count] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char dest[] = "aaaa";
	char src[] = "bbbb";
	unsigned int n;

	n = 2;
	ft_strncat(dest, src, n);
	printf("%s", dest);
	return (0);
} */
