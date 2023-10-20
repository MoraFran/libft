/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:13:43 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/03 13:44:23 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// asigna memoria para una matriz de "count" elementos de "size" bytes cada uno.
// devuelve un puntero a la memoria asignada. La memoria es puesta a 0.
// para calloc y malloc, el valor devuelto es un puntero a la memoria asignada
// que está convenientemente alineada para cualquier tipo de variable, 
// o NULL si la petición falla.
// free() no devuelve ningún valor.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	memory;

	memory = count * size;
	str = (void *)malloc(memory);
	if (!str)
		return (NULL);
	ft_bzero(str, memory);
	return (str);
}
/*
int	main(void)
{
	size_t	count;
	size_t	size;

	
	return (0);
}*/
