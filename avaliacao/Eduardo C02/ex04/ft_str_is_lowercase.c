/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:47:50 by freduard          #+#    #+#             */
/*   Updated: 2023/06/13 17:13:20 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 'a' && str[c] <= 'z'))
			return (0);
		c++;
	}
	return (1);
}

int	main(void)
{
	int	i;
	int j;
	int k;
	i = ft_str_is_lowercase("qwerAty");
	j = ft_str_is_lowercase("qwerty!123456");
	k = ft_str_is_lowercase("");
	printf("%i\n", i);
	printf("%i\n", j);
	printf("%i\n", k);
	return(0);
}