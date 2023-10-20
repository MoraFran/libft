/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:43:48 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/25 15:24:29 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) + ft_isdigit(c));
}
/*
#include<ctype.h>
#include<stdio.h>
int	main(void)
{
	int	c;

	c = '@';
	printf("%d", ft_isalnum(c));
	return(0);
}*/
