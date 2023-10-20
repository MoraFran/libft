/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:00:45 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:23:19 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función devuelve la longitud de la string recibida.
// usa un tipo de variable size_t, la cual permite cualquier tamaño de enteros.
// necesitaremos la librería string.h y stddef.h

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
