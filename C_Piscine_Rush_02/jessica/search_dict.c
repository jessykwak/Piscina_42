/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:37:44 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/10 14:13:33 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(const char *str1, const char *str2, int num)
{
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

char	*search_dict(const char dictionary, char *number)
{
	char	*result;
	char	buffer[4];
	char	string[100];
	int	file_descriptor;
	ssize_t	string_size;
	int	stringlen;

	*result = NULL;
	buffer[4] = {*number, ':', ' ', '\0'};
	file_descriptor = open(dictionary, O_RDONLY);
	if (file_descriptor == -1)
	{
		write(2, "Error: Failed to open the dictionary file\n", 41);
		return (NULL);
	}
	while ((string_size = read(file_descriptor,
				string, sizeof(string) - 1)) > 0)
	{
		string[string_size] = '\0';

		stringlen = ft_strlen(string);
		if (stringlen >= 4 && ft_strcmp(string, buffer, 4) == 0)
		{
			result = strdup(string + 4);
			break;
		}
		close (file_descriptor);
		file_descriptor = open(numbers.dict, O_RDONLY);
	}

	close (file_descriptor);
	return (result);
}
