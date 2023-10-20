/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:11:22 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/19 17:36:13 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función convierte una mayúscula en su correspondiente minúscula.
// el srgumento debe ser representado como un unsigned char o el valor EOF.
// devuelve la correspondiente minúscula. 
// Si no, devuelve el argumento sin cambios.

#include "libft.h"
#include<xlocale.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}
/*
int	main(void)
{
	int c;

	c = 'R';
	printf("%d\n", ft_tolower(c));
	printf("%d", tolower(c));
	return (0);
}*/
