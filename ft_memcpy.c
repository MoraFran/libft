/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:45:45 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/03 19:30:11 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copia area de memoria
// copia "n" bytes desde el area de memoria "src" al area de memoria "dst".
// si "dst" y "src" se superponen, el comportamiento no está definido.
// devuelve el valor origina de "dst".

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!source && !dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char	destino[] = "Real Madrid";
	char	fuente[] = "Rayo Vallecano";
	size_t	n;

	n = 5;
	printf("%s", ft_memcpy(destino, fuente, n));
	return (0);
}*/
