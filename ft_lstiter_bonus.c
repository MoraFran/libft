/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:27:29 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/18 18:55:08 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Itera la lista 'lst' y aplica la función 'f' en el contenido de cada nodo.
// lst: un puntero al primer nodo.
// f: un puntero a la función que utilizará cada nodo.
// Devuelve: nada.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
