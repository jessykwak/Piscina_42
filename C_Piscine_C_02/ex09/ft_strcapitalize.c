/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:31:42 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 12:18:42 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcapitalize(char *str)
{
	int		count;

	count = 0;
	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;
	count = 1;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if ((str[count - 1] >= 00 && str[count - 1] <= 47)
				|| (str[count - 1] >= 58 && str[count - 1] <= 64)
				|| (str[count - 1] >= 92 && str[count - 1] <= 96))
					str[count] -= 32;
		}
		else if (str[count] >= 'A' && str[count] <= 'Z')
		{
			if ((str[count - 1] >= 'a' && str[count - 1] <= 'z')
				|| (str[count - 1] >= 'A' && str[count - 1] <= 'Z')
				|| (str[count - 1] >= '0' && str[count - 1] <= '9'))
					str[count] += 32;
		}
		count++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "salut, comment tu &vas ? 42Mots !quarANte-deux; @cinquante+et+un";

	ft_strcapitalize(&*str);
	printf("%s", str);
	return (0);
} */
