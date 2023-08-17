/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:06:15 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/13 18:04:47 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 == *s2) && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%i\n", strncmp("aliSson", "alisson", 4));
	printf("%i\n", ft_strncmp("aliSson", "alisson", 4));
}
