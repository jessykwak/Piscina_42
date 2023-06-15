/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:34:18 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/14 18:57:27 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && index < n)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	if (index != n)
		return (s1[index] - s2[index]);
	return (0);
}

/* int main(void)
{
	int	n;

	n = ft_strncmp("Jessica", "Jessica", 4);
	printf("%d\n", n);
	n = strncmp("Jessica", "Jessica", 4);
	printf("%d\n", n);
	n = ft_strncmp("Jessica", "JeSsica", 3);
	printf("%d\n", n);
	n = strncmp("Jessica", "JeSsica", 3);
	printf("%d\n", n);
	return (0);
} */
