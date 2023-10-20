/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:24:48 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/06 17:07:14 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Elimina todos los caracteres de la string "set" desde el principio y desde
// el final de "s1", hasta encontrar un caracter no perteneciente a "set".
// s1 = la string que debe ser recortada.
// set = los caracteres a eliminar de la string.
// la string resultante se devuelve con una reserva de malloc(3).
// devuelve la string recortada y NULL si falla malloc.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	str = ft_substr((char *)s1, 0, i + 1);
	return (str);
}
/*
int	main(void)
{
	char	*s1 = "HOLA MUNDO";
	char	*set = "DOH";
	char	*resultado = ft_strtrim(s1, set);

	printf("%s", resultado);
	free(resultado);
	return (0);
}*/
