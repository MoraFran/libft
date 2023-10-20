/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:47:08 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/06 18:53:39 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Envía la string "s" al file descriptor especificado.
// s = la string a enviar.
// fd = el file descriptor sobre el que escribir.
// función permitida: write.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}
