/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:44:34 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 12:18:32 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
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
	char	str[4] = "1a3";

	a = ft_str_is_numeric(&*str);
	printf("%d", a);
}
 */