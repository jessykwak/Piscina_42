/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:02:45 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:03:55 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str);

char	*ft_return_first_str_num(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = str[i];
	while (c)
	{
		if ((c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v'
				|| c == '\f') && c)
		{
			i++;
			c = str[i];
		}
		else if ((c >= '0' && c <= '9') || c == '+')
		{
			if (c == '+')
				i++;
			c = str[i];
			if (c)
				return (&str[i]);
		}
		else
			return (0);
	}
	return (0);
}

char	*ft_final_str(char *str)
{
	int		i;
	char	*final_str;
	int		str_len;

	i = 0;
	str_len = 0;
	while (str[str_len] >= '0' && str[str_len] <= '9')
	{
		str_len++;
	}
	final_str = malloc(sizeof(char) * str_len);
	while (str[i] >= '0' && str[i] <= '9')
	{
		final_str[i] = str[i];
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}

char	*ft_return_valid_str(char *argv)
{
	char	*str_unfilter;
	char	*final_str;

	str_unfilter = ft_return_first_str_num(argv);
	if (str_unfilter == 0)
		return (0);
	final_str = ft_final_str(str_unfilter);
	return (final_str);
}

/* int	main(void)
{
	char *str = 0;
	str = ft_return_valid_str("++893sadsa323");
	printf("%s", str);
} */