/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:46:56 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/03 14:10:41 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// devuelve un puntero a una nueva string de char que es un duplicado de la 
// string apuntada por s.
// la memoria para la nueva cadena se obtiene automáticamente con malloc
// y puede y debe liberarse con free.

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, (ft_strlen(s1) + 1));
	return (str);
}
