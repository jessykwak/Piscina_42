/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:54:50 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 20:41:59 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		while ((str[count] - to_find[count2]) == 0)
		{
			count2++;
			count++;
			if (to_find[count2] == '\0')
				return (&str[count - count2]);
		}
		count++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "banana melancia e abacaxi";
	char to_find[] = "k";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}