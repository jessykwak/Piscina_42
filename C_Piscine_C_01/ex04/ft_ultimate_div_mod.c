/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:47:02 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/07 15:51:17 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
	else
	{
		*a = '\0';
		*b = '\0';
	}
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 0;
	printf("%d divided by %d = ", a, b);
	if (b == 0)
		printf("THE DIVISOR CANNOT BE ZERO!");
	else
	{
		ft_ultimate_div_mod(&a, &b);
		printf("%d with remainder = %d", a, b);
	}
	return (0);
}
*/