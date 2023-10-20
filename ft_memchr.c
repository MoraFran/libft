/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:30:01 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/29 13:56:23 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Localiza el byte en una cadena de bytes. (1 byte = 8 bits)
// localiza la primera aparición de c (convertida en un unsigned int)
// en la cadena s.
// Devuelve un puntero al byte localizacado,
// o NULL si no existe el byte dentro de n bytes.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const void	*buffer;
	int			c;
	
	buffer = "Real Madrid";
	c = 'a';
	printf("Resultado: %s\t", ft_memchr(buffer, c, 10));
	printf("Resultado: %s\n", memchr(buffer, c, 10));
	return (0);
}*/
