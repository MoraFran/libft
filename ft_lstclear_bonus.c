/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:47:51 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/18 18:25:47 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Elimina y libera el nodo 'lst' dado y todos los consecutivos de ese nodo,
// utilizando la función 'del' y free(3).
// Al final, el puntero a la lista debe ser NULL.
// lst: la dirección de un puntero a un nodo.
// del: un puntero a función utilizado para eliminar el contenido de un nodo.
// Devuelve: nada.
// Función Aut.: Free.

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = aux;
		}
	}
}
