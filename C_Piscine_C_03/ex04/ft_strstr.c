/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:54:50 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/14 18:57:34 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	i;

	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		i = 0;
		while (str[c + i] != '\0' && str[c + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (&str[c]);
			i++;
		}
		c++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char str[] = "banana melancia e abacaxi";
	char to_find[] = "ana";

	printf("%s", ft_strstr(str, to_find));
	return (0);
} */