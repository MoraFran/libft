/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:28:16 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/06 13:02:21 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función compara no más de n caracteres. 
// devuelve un int mayor, igual o menor que 0 según sea s1 mayor, igual
// o menor que s2.
// la comparación la hace usando unsigned char, de modo que 
// '\200' sea mayor que '\0'.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] || str2[i]) && i < n)
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
	const char	s1[] = "Hola mundo";
	const char	s2[] = "Hola Mundo";
	size_t		n;

	n = 8;
	printf("Diferencia en ASCII: %d\t", ft_strncmp(s1, s2, n));
	printf("--->\t");
	printf("Diferencia en ASCII: %d\n", strncmp(s1, s2, n));
	return (0);
}*/
