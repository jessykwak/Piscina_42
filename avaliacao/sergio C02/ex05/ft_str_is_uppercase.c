/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:23:23 by sartifon          #+#    #+#             */
/*   Updated: 2023/06/14 21:41:09 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
			return (0);
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
	}
	return (1);
}

int	main(void)
{
	char alpha[] = "aaaa";
	printf("result %d", ft_str_is_uppercase(alpha));

	return (0);
}