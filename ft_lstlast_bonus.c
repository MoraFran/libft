/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:38:35 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/17 17:46:09 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Devuelve el último nodo de la lista.
// lst: el principio de la lista.
// devuelve: el último nodo de la lista.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
