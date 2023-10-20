/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:35:49 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/26 19:46:35 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función concatena strings 
// es más segura, consistente y tiene menos errores que strcpy.
// toma el tamaño completo del buffer de destino y garantiza el valor '\0'.
// devuelve la longitud total de la string que ha intentado crear.
// si el valor del return es >= dstsize, el string de salida se ha truncado

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = dstlen;
	i = 0;
	if (!dst && dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] && (j + 1 < dstsize))
	{
		dst[j] = src[i];
		i++;
		j++;
	}	
	dst[j] = '\0';
	return (dstlen + srclen);
}
/*
int main(void)
{
	size_t 		n = 8;
	char    	dst[] = "parámetros";
	const char  src[] = "Hola mundo";
	
	printf("Copiado: %zu\t", ft_strlcat(dst, src, n));
	printf("Copiado: %zu\n", strlcat(dst, src, n));
	printf("fuente: %s\n", src);
	printf("destino: %s\n", dst);
	return (0);
}*/
