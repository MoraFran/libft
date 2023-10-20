/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:20:47 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/06 17:25:56 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// envía el carácter "c" al file descriptor especificado.
// c = el carácter a enviar.
// fd = el file descriptor sobre el que escribir.
// función autorizada = write.
// No devuelve nada.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
