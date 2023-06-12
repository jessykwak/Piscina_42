/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:36:55 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/11 21:03:37 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	number_logic(char *input);
char	*ft_return_valid_str(char *argv);

int	main(int argc, char **argv)
{
	char	*nb;

	if (argc < 2 && argc > 3)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	else if (argc == 2)
	{
		nb = ft_return_valid_str(argv[1]);
		if (!(nb))
		{
			write(1, "ERROR\n", 6);
			return (0);
		}
		else
		{
			number_logic(nb);
		}
	}
}
