/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:48:51 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:05:23 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	aux;

	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			aux = *str + 32;
			*str = aux;
		}
		str++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[8];

	str[8] = "ROI";
	ft_strlowcase(&*str);
	printf("%s", str);
}
 */