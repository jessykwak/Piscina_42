/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:34:53 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:29:57 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!((str[position] >= 97 && str[position] <= 122)))
			return (0);
		position++;
	}
	return (1);
}

#include<stdio.h>
int	main(void)
{
	char	str_null[] = "";
	char	str_cap_letters[] = "LOLA";
	char	str_lwc_letters[] = "lola";
	char	str_only_nbs[] = "178265918354";
	char	str_let_nbs[] = "qowit83452398auirghiu";

	printf("empty string: %d\n", ft_str_is_lowercase(str_null));
	printf("str cap letters: %d\n", ft_str_is_lowercase(str_cap_letters));
	printf("str low letters: %d\n", ft_str_is_lowercase(str_lwc_letters));
	printf("str numbers: %d\n", ft_str_is_lowercase(str_only_nbs));
	printf("str letter and numbers: %d\n", ft_str_is_lowercase(str_let_nbs));
}
