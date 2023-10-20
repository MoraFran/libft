/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:28:26 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/06 17:42:33 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// envía la string "s" al file descriptor especifido.
// s = la string a enviar.
// fd = el file descriptor sobre el que escribir.
// función autorizada: write.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
