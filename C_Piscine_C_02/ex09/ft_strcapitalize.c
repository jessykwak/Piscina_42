/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:31:42 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/09 15:38:38 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	aux;
	int	count;

	count = 0;
	while (*str)
	{
		if ((str[0] >= 'a' && str[0] <= 'z'))
		{
			aux = str[0] - 32;
			str[0] = aux;
		}
		else if (count > 0 && ((str[count-1] >= 32 && str[count-1] <= 64) && (str[count] >= 'a' && str[count] <= 'z')))
		{
			aux = str[count] - 32;
			str[count] = aux;
		}
		str++;
		count++;
	}
	return (str);
}

int	main(void)
{
	char	str[21] = "roi, eu noa sei, aloo";

	ft_strcapitalize(&*str);
	printf("%s", str);
}
