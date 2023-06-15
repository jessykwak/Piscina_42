/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:07:19 by kkarolin          #+#    #+#             */
/*   Updated: 2023/06/13 13:05:47 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, str, 1);
		index++;
	}
}


int	main(void)
{
	char	*piscine;

	piscine = "intasdasdadsadra";
	ft_putstr(piscine);
	return (0);
}

