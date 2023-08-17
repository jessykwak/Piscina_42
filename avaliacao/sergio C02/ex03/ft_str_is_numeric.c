/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:45:59 by sartifon          #+#    #+#             */
/*   Updated: 2023/06/14 21:38:33 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i])
	{
		while (str[i] >= 48 && str[i] <= 57)
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
	char alpha[] = "1232a13";
	printf("result %d", ft_str_is_numeric(alpha));
}