/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:13:16 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:05:05 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 32)
		{
			return (0);
		}
		str++;
	}
	return (1);
	if (*str == '\0')
		return (1);
}

/* int	main(void)
{
	int		a;
	char	str[8];

	str[8] = "caraca";
	a = ft_str_is_alpha(&*str);
	printf("%d", a);
} */
