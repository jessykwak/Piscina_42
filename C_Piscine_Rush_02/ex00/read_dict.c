/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:37:44 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:04:04 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	size_t	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count <= n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

char	*read_dict(void)
{
	char	*buffer;
	int		path_name;
	int		read_size;

	buffer = (char *)malloc(sizeof(char) * 640);
	path_name = open("numbers.dict", O_RDONLY);
	if (path_name == -1)
	{
		write(2, "Error: Failed to open the dictionary file\n", 41);
		return (0);
	}
	read_size = read(path_name, buffer, 639);
	if (read_size == -1)
	{
		write(2, "Error: Failed to read the dictionary file\n", 41);
		close(path_name);
		return (0);
	}
	buffer[read_size] = '\0';
	close(path_name);
	return (buffer);
}

/* int	main(void)
{
	char *str;

	str = read_dict();
	printf("%s", str);
	return (0);
} */
