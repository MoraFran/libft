/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:58:42 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/06 19:08:30 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a cada carácter de la string "s", aplica la funcióin "f" dando como 
// parámetros el índice de cada carácter dentro de "s" y la dirección del 
// propio carácter, que podrá modificarse si es necesario.
// s = la string que iterar.
// f = la función a aplicar sobre cada carácter.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
