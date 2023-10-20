/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:59:24 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/11 19:05:48 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Utilizando malloc(3), genera una string que represente el valor entero 
// recibido como argumento. Los números negativos tienen que gestionarse.
// n = el entero a convertir.
// devuelve la string que represente el número.
// NULL si falla la reserva de memoria.

#include "libft.h"

static int	numlen(long n)
{
	long	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{		
		n /= 10;
		len++;
	}
	return (len);
}

static char	*convert(long num, char *str, int i)
{
	if (num == 0)
		str[0] = '0';
	str[i] = '\0';
	i--;
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		i--;
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		i;

	num = n;
	i = numlen(num);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str = convert(num, str, i);
	return (str);
}
