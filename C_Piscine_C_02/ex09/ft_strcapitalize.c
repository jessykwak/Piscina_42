/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:31:42 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:05:27 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	aux;
	int		count;

	count = 0;
	if (str[count] >= 'a' && str[count] <= 'z')
	{
		aux = str[count] - 32;
		str[count] = aux;
	}
	count = 1;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if ((str[count - 1] >= 00 && str[count - 1] <= 47)
				|| (str[count - 1] >= 58 && str[count - 1] <= 64)
				|| (str[count - 1] >= 92 && str[count - 1] <= 96))
			{
				aux = str[count] - 32;
				str[count] = aux;
			}
		}
		count++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "salut, comment tu &vas ? 42mots !quarante-deux; @cinquante+et+un";

	ft_strcapitalize(&*str);
	printf("%s", str);
	return (0);
}
 */