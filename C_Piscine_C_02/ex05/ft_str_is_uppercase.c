/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:11:39 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:04:51 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
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
	int	a;
	char	str[6] = "WHAt";

	a = ft_str_is_alpha(&*str);
	printf("%d", a);
}
 */