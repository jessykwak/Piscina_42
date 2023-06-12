/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:34:51 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:03:15 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*read_dict(void);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_num_name(char *str)
{
	int		i;
	int		j;
	char	*aux;

	aux = (char *)malloc(sizeof(char) * 50);
	i = 0;
	j = 0;
	while (str[i] && j == 0)
	{
		if (str[i] == ':' && str[i + 1] == ' ')
		{
			i += 2;
			while (str[i] != '\n')
			{
				aux[j] = str[i];
				i++;
				j++;
			}
		}
		i++;
	}
	return (aux);
}

char	*find_number(char *input)
{
	char	*buffer;
	char	*string;

	buffer = read_dict();
	string = ft_num_name(ft_strstr(buffer, input));
	return (string);
}
