/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:42:51 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/19 17:35:15 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función convierte las minúsculas en su correspondiente mayúscula.
// el argumento debe ser representado como un unsigned char o el valor de EOF.
// Devuelve la correspondiente mayúscula si hay una, 
// si no, devuelve el argumento sin cambios.

#include "libft.h"
#include<xlocale.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
/*
int	main(void)
{
	int	c;
	
	c = 'm';
	printf("%d\n", ft_toupper(c));
	printf("%d", toupper(c));

	return(0);
}*/
