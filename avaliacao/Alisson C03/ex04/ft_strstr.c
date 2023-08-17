/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:18:16 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/13 18:29:09 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_equal(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (0);
		str1++;
		str2++;
	}
	return (*str2 == *str1);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && ft_str_is_equal(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char test[] = "adao neponuceno de osuza";
	char *result;

	result = ft_strstr(test, "neponuceno");
	printf("%s\n", result);
	printf("%d\n", ft_str_is_equal("Jessica Kwak", "Jessica Kwakaaaa"));
	

}
