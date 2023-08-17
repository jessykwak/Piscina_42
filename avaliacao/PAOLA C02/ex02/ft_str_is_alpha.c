/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:05:53 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:26:17 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if ((!(str[position] >= 'a' && str[position] <= 'z')))
		{
			if ((!(str[position] >= 'A' && str[position] <= 'Z')))
			{
				return (0);
			}
		}
	position++;
	}
	return (1);
}

#include<stdio.h>
int	main(void)
{
	char	str_null[] = "";
	char	str_letters[] = "LOLA";
	char	str_only_nbs[] = "17826918354";
	char	str_let_nbs[] = "lol2a";
	char	str_spec[] = "]]]]]]";

	printf("empty string returns %d\n", ft_str_is_alpha(str_null));
	printf("string with letter returns %d\n", ft_str_is_alpha(str_letters));
	printf("string only numbers returns %d\n", ft_str_is_alpha(str_only_nbs));
	printf("string letter + numb returns %d\n", ft_str_is_alpha(str_let_nbs));
	printf("string special char %d\n", ft_str_is_alpha(str_spec));
}