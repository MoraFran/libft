/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:34:16 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/04 18:07:22 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (con malloc) y devuelve una nueva string, formada por la 
// concatenación de "s1" y "s2".
// s1 = la primera string.
// s2 = la string a añadir a "s1".

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, len1);
	ft_memcpy(s3 + len1, s2, len2 +1);
	return (s3);
}
