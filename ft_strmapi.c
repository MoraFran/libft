/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:25:01 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/10 14:55:48 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a cada carácter de la string "s", aplica la función "f" dando como 
// parámetros el índice de cada carácter dentro de la "s" y el propio carácter.
// Genera una nueva string con el resultado del uso sucesivo de "f".
// Funciones autorizadas: malloc.
// s = la string que iterar.
// f = la función a aplicar sobre cada caracter.
// Devuelve la string creada tras el correcto uso de "f" sobre cada carácter.
// NULL si falla la reserva de memoria.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
