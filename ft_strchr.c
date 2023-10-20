/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:45:43 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/25 12:54:12 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función localiza la primera coincidencia de c (convertida a char)
// en el string apuntado por s.
// la terminación "null character" es considerado parte de la string.
// de esta forma, si c es '\0', la función localiza el '\0'.
// Devuelve un puntero al caracter encontrado, 
// o NULL si el caracter no aparece en la string. NULL == 0 ??

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (c > 255)
		c -= 256;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	int	c;
	const char s[] = "Hola mundo";

	c = 'o';
	printf("%s\n", ft_strchr((char *)s, c));
	printf("%s\n", strchr((char *)s, c));
	return (0);
}*/
