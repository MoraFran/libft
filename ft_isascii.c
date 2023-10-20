/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:34:12 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/19 17:33:28 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// esta función comprueba si un caracter está en la tabla ASCII
// (en decimal del 0 al 127)

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
