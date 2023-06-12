/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:37:26 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:39:49 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	if (src[count] == '\0')
		dest[count] = '\0';
	return (&*dest);
}

/* int	main(void)
{
	char	src[];
	char	dest[sizeof(src)];

	src[] = "Changes,
		they might drive you half-insane\nBut it's killing you to stay the same";
	dest[sizeof(src)] = {};
	printf("%s\n", src);
	ft_strcpy(&*dest, &*src);
	printf("%s\n", dest);
	return (0);
}
 */