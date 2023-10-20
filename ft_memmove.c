/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:10:54 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/29 16:53:43 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copia cadena de bytes
// copia "len" bytes de la string src a la string dst. 
// las dos strings pueden superponerse.
// la copia se realiza siempre de forma no destructiva.
// devuelve el valor original de dst.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*source;

	dest = (unsigned char *)dst;
	source = src;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (0 < len--)
			dest[len] = source[len];
	}
	return (dst);
}
/*
int	main(void)
{
	char	source[] = "Mora";
	char	dest[] = "Málaga";
	size_t	len = 4;

	printf("%s\t", ft_memmove(dest, source, len));
	printf("%s\n", memmove(dest, source, len));
	printf("%s\n", dest);
	printf("%s\n", source);
	return (0);
}*/
