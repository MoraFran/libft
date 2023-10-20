/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:44:41 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/03 19:36:43 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  convierte string de ASCII a int.
//  convierte la porción inicial de la string a la que apunta str a int.
//  no necesita afectar el valor de "errno" en caso de error.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + str[i] - 48;
		i++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	const char	str[] = "      - 1234manolo";

	printf("%d", ft_atoi(str));
	return (0);
}*/
