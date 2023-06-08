/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmin-kwa <jmin-kwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:48:51 by jmin-kwa          #+#    #+#             */
/*   Updated: 2023/06/08 19:03:34 by jmin-kwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int occ_z(char *str)
{
    while (*str != '\0')
    {
        write(1, &*str, 1);
        *str++;
    }
    write(1, "\n", 1);
    return(0);
}

int main(void)
{
    occ_z("nossa jaqueline, eh isso q eu vo escrever");
    return(0);
}