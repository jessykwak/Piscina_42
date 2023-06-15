/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:18:05 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/14 20:10:33 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	nb;

	neg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	nb = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("----165**13(&"));
	return (0);
} */
