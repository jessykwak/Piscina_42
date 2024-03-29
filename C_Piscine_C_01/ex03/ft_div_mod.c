/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:06:36 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/07 15:51:37 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = '\0';
		*mod = '\0';
	}
}

/* int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 3;
	b = 0;
	ft_div_mod(a, b, &div, &mod);
	if (div == '\0' && mod == '\0')
		printf("THE DIVISOR CANNOT BE ZERO!");
	else
	{
		printf("%d by %d = %d, remainder %d", a, b, div, mod);
	}
	return (0);
}
*/