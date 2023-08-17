/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:10:33 by sartifon          #+#    #+#             */
/*   Updated: 2023/06/14 21:39:59 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
			return (0);
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
	}
	return (1);
}

int	main(void)
{
	char alpha[] = "aas1dffdsd";
	printf("result %d", ft_str_is_lowercase(alpha));

	return (0);
}