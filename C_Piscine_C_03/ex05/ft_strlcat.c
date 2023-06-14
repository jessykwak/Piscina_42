/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:46:11 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 21:35:44 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ??????????????????????????????????????

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	index = 0;
	if (size < ft_strlen(dest))
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		return (count + size)
	}
	index = 0;
	else if (size > ft_strlen(dest))
	{
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
		return (count + index)
	}
	
	return (count + index);
}
