/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:22:24 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/28 17:50:42 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// rellena una cadena de bytes con un valor de byte
// escribe len bytes de valor c (convertidos a unsigned char) a la string b
// devuelve su primer argumento.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
/*
int	main(void)
{
	unsigned char	str[] = "Hola mundo";
	int				c;
	int				d;
	size_t			len;

	c = 'M';
	d = 'R';
	len = 5;
	printf("Resultado: %s\t", ft_memset(str, c, len)); 
	printf("Resultado: %s\n", memset(str, d, len)); 
	return (0);
}*/
