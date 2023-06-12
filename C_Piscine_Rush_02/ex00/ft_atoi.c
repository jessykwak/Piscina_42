/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:02:35 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:04:02 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}

/* int main(void)
{
	printf("%d", ft_atoi("123"));
} */