/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:10:40 by kkarolin          #+#    #+#             */
/*   Updated: 2023/06/13 12:59:56 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int*********nbr)
{
	*********nbr = 42;
}


#include	<stdio.h>

int main(void)
{
	int 	old;
	int	*pont1;
	int	**pont2;
	int	***pont3;
	int	****pont4;
	int	*****pont5;
	int	******pont6;
	int	*******pont7;
	int	********pont8;
	int	*********pont9;

	old = 25;
	pont1 = &old;
	pont2 = &pont1;
	pont3 = &pont2;
	pont4 = &pont3;
	pont5 = &pont4;
	pont6 = &pont5;
	pont7 = &pont6;
	pont8 = &pont7;
	pont9 = &pont8;
	ft_ultimate_ft(pont9);
	printf("%d", old);
	return (0);
}

