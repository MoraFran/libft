/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:54:24 by frmora-m          #+#    #+#             */
/*   Updated: 2023/09/28 19:09:29 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// escribe ceros en una string de bytes
// escribe n bytes puestos a 0 en la cadena s. Si n es 0, bzer0() no hace nada.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
