/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:56:55 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/17 16:35:47 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cuenta el número de nodos de una lista.
// lst: el principio de la lista.
// Devuelve: la longitud de la lista.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int		size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}*/
