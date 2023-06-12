/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:47:12 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/12 15:55:50 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int dif;
	int index;

	index = 0;
	while (*s1 || *s2)
	{
		dif = s1[index] - s2[index] 
        if (dif < 0) 
            return (-1);
		else if (dif > 0) 
            return (1);
	}
	if (dif == 0)
		return (0);
}