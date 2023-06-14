/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   original.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:54:50 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 20:24:22 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;
	int	index;

	count = 0;
	count2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		while (to_find[count2] != '\0')
		{
			if ((str[count] - to_find[count2]) == 0)
			{
				count2++;
				index = count;
			}
			else if ((str[count] - to_find[count2]) != 0)
			{
				count2 = 0;
				if (str[count + 1] == '\0')
					return (0);
			}
			count++;
		}
		count++;
	}
	count = 0;
	while (str[index + 1 - count2 + count] != '\0')
	{
		str[count] = str[index + 1 - count2 + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "banana melancia e abacaxi";
	char to_find[] = "melancia";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}