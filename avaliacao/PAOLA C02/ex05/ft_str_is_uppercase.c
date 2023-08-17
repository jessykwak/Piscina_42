/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:10:50 by pchristi          #+#    #+#             */
/*   Updated: 2023/06/12 18:30:33 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!((str[position] >= 65 && str[position] <= 90)))
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
	char	str_only_nbs[] = "17828354";
	char	str_let_nbs[] = "qowitghiu";

	printf("empty string returns %d\n", ft_str_is_uppercase(str_null));
	printf("cap letters returns %d\n", ft_str_is_uppercase(str_cap_letters));
	printf("lowcse letters returns %d\n", ft_str_is_uppercase(str_lwc_letters));
	printf("only numbers returns %d\n", ft_str_is_uppercase(str_only_nbs));
	printf("letter and numbers returns %d\n", ft_str_is_uppercase(str_let_nbs));
}
