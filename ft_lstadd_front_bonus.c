/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:07:03 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/17 14:22:23 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Añade el nodo 'new' al principio de la lista 'lst'.
// lst: la dirección de un puntero al primer nodo de una lista.
// new: un puntero al nodo que añadir al principio de la lista.
// devuelve nada.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
