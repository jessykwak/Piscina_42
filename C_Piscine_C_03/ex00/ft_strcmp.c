/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:12 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 15:07:01 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	dif;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		dif = s1[index] - s2[index];
		if (dif < 0)
		{
			return (dif);
		}
		else if (dif > 0)
		{
			return (dif);
		}
		index++;
	}
	return (dif);
}

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	int n;

	str1 = "gotta catch 'em all!";
	str2 = "GO! PIKACHU!";
	str3 = "Go! PIKACHU!";
	str4 = "GO! PIKACHU!";
	n = ft_strcmp(str1, str2);
	printf("%d\n", n);
	n = ft_strcmp(str2, str1);
	printf("%d\n", n);
	n = ft_strcmp(str3, str2);
	printf("%d\n", n);
	n = ft_strcmp(str4, str2);
	printf("%d\n", n);
	return (0);
}