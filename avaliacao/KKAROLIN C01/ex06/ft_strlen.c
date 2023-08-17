/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:24:10 by kkarolin          #+#    #+#             */
/*   Updated: 2023/06/13 13:08:04 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	piscine;

	piscine = 0;
	while (*str != '\0')
	{
		piscine++;
		str++;
	}
	return (piscine);
}	


#include	<stdio.h>

int	main(void)
{
	char	*sp;
	int	escola;

	sp = "";
	escola = ft_strlen(sp);
	printf("%d", escola);
	return (0);
}

