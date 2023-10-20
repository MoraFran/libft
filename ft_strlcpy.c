/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:05:58 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/26 19:41:12 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función copia strings con los mismos parámetros de entrada y 
// es más segura, consistente y tiene menos errores que strncpy.
// toma el tamaño completo del buffer de destino y garantiza el valor '\0'.
// devuelve la longitud total de la string que ha intentado crear.
// si el valor del return es >= dstsize, el string de salida se ha truncado.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(src);
	i = 0;
	if (dstsize != '\0')
	{
		while (src[i] && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
/*
int	main(void)
{
	size_t n = 8;

	char	dst[] = "parámetros";
	const char	src[] = "Hola mundo";

	printf("Copiado: %zu\t", ft_strlcpy(dst, src, n));
	printf("Copiado: %zu\n", strlcpy(dst, src, n));
	printf("fuente: %s\n", src);
	printf("destino: %s\n", dst);
	return (0);
}*/
