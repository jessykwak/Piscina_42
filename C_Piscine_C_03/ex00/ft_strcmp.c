/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:12 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/14 18:57:24 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char *str1;
// 	char *str2;
// 	char *str3;
// 	char *str4;
// 	int n;

// 	str1 = "gotta catch 'em all!";
// 	str2 = "GO! PIKACHU!";
// 	str3 = "Go! PIKACHU!";
// 	str4 = "";
// 	n = ft_strcmp(str1, str2);
// 	printf("%d\n", n);
// 	printf("%d\n", strcmp(str1, str2));
// 	n = ft_strcmp(str2, str1);
// 	printf("%d\n", n);
// 	printf("%d\n", strcmp(str2, str1));
// 	n = ft_strcmp(str3, str2);
// 	printf("%d\n", n);
// 	printf("%d\n", strcmp(str3, str2));
// 	n = ft_strcmp(str4, str2);
// 	printf("%d\n", n);
// 	printf("%d\n", strcmp(str4, str2));
// 	return (0);
// }