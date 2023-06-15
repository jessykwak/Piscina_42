/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:47:21 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/06/15 13:34:28 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	d;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		d = s1[i] - s2[i];
		if (d < 0)
		{
			return (d);
		}
		else if (d > 0)
		{
			return (d);
		}
		i++;
	}
	return (d);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[20] = "springday";
	char str2[20] = "springnight";
	printf("self test = %d\n", ft_strcmp(str1, str1));
	printf("self test = %d\n", ft_strcmp(str1, str2));
	printf("self test = %d\n", strcmp(str1, str1));
	printf("self test = %d\n", strcmp(str1, str2));
}
