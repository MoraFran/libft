/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:02:46 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/27 16:23:12 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Localiza una substring en una string, "la aguja en el pajar"
// needle = aguja / haystack = pajar.
// Localiza la primera aparición del término nulo. '\0'
// no se buscan más de "len" caracteres. si i es el contador, (i < len).
// los caracteres que aparezcan después del '\0' no son buscados.
// dado que la función es una API específica de FreeBSD solo de utilizarse
// cuando la portabilidad no es una preocupación.
//
// si needle no existe, devuelve haystack.
// si no encuentra needle, devuelve NULL.
// si needle es > haystack, devuelve NULL.
// si len < aguja, devuelve NULL.

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*needle != '\0'))
		return ((char *)&haystack[0]);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t		len = 25;
	const char	pajar[] = "La Real Sociedad gana!";
	const char	aguja[] = "Sociedad";
	
	printf("Encontrado: %s\t", ft_strnstr(pajar, aguja, len));
	printf("Encontrado: %s\n", strnstr(pajar, aguja, len));
	return (0);
}*/
