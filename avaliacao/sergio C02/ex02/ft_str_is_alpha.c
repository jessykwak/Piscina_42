/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:05:48 by sartifon          #+#    #+#             */
/*   Updated: 2023/06/14 21:37:27 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i])
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
		{
			i++;
			return (1);
		}
	}
	if (str[i] == '\0')
	{
		i++;
		return (1);
	}
	return (0);
}

int	main(void)
{
	char alpha[] = "asasa2";
	printf("result %d", ft_str_is_alpha(alpha));

	return (0);
}