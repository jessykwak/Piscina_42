/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:48:51 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 12:18:40 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "ASJDAJK ASIJD";

	ft_strlowcase(str);
	printf("%s", str);
} */