/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:21:08 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/06 12:48:15 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función localiza la última coincidencia de c (convertido a char)
// en la string apuntada por s.
// la terminación "Null character" es considerado parte de la string.
// de esta forma, si c es '\0', la función localiza el '\0'.
// es identica a strchr, excepto que localiza la última coincidencia de c.
// devuelve un puntero al carácter encontrado, 
// o NULL si el carácter no aparece en la string.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*s != '\0')
	{
		if ((char)*s == (char)c)
			str = (char *)s;
		s++;
	}
	if (*str == (char)c)
		return (str);
	if ((char)*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	int	c = 'j';
	const char s[] = "abcjjfghijk";

	printf("%s\n", ft_strrchr((char *)s, c));
	printf("%s", strchr((char *)s, c));
	return (0);
}*/
