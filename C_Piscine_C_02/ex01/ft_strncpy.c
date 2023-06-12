/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:32:03 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:39:39 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count <= n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/* int	main(void)
{
	char			src[];
	unsigned int	n;
	char			dest[n];

	src[] = "crap";
	n = 8;
	printf("%s\n", src);
	ft_strncpy(&*dest, &*src, n);
	printf("%s\n", dest);
	return (0);
}
 */