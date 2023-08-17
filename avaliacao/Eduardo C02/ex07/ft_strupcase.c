/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:10:53 by freduard          #+#    #+#             */
/*   Updated: 2023/06/13 17:16:49 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 97) && (str[c] <= 122))
			str[c] -= 32;
		c++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "c is fine! s\nwimmin2343g is great!";
    printf("Antes: %s\n", str);
	ft_strupcase(str);
	printf("Depois: %s\n", str);
	return (0);
}
