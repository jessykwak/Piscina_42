/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:47:44 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/06/15 13:41:58 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "bestofy";
	char str2[] = "bestofyou";
	printf("self test = %d\n", ft_strncmp(str1, str2, 7));
	printf("self test = %d\n", ft_strncmp(str1, str2, 9));
	printf("self test = %d\n", strncmp(str1, str2, 7));
	printf("self test = %d\n", strncmp(str1, str2, 9));
}
