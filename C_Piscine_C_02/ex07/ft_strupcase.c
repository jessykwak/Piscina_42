/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:23:18 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/08 16:41:20 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	aux;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			aux = str[count] - 32;
			str[count] = aux;
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	char	str[8] = "cAraca!";

	ft_strupcase(&*str);
	printf("%s", str);
}