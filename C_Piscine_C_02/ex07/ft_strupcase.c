/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:23:18 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/13 12:18:39 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "ajksdkland aoisjd";

	ft_strupcase(&*str);
	printf("%s", str);
} */
