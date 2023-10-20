/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:21:23 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/29 18:45:10 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compara cadenas de bytes.
// compara la string de bytes s1 con la string de bytes s2.
// se supone que ambas tienen n bytes de longitud.
// devuelve 0 si las dos strings son idénticas.
// devuelve la diferencia entre los 2 primeros bytes diferentes (unsigned char).
// las strings de longitud 0 son siempre idénticas. (no requerido en C)
// y el código portátil solo debería depender del signo del valor devuelto.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned const char	s1[] = "Acciones";
	unsigned const char	s2[] = "cciones";
	size_t				n = 0;

	printf("%d", ft_memcmp(s1, s2, n));
	printf("%d", memcmp(s1, s2, n));
	return (0);
}*/
