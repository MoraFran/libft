/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:56:58 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/20 17:47:18 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Itera la lista 'lst' y aplica la función 'f' al contenido de cada nodo.
// Crea una lista resultante de la aplicación correcta y sucesiva de la 
// función 'f' sobre cada nodo.
// La función 'del' se utiliza para eliminar el contenido de un nodo, 
// si hace falta.
// lst: un puntero a un nodo.
// f: la dirección de un puntero a una función usada en la iteración de cada 
// elemento de la lista.
// del: un puntero a función utilizado para eliminar el contenido de un nodo,
// si es necesario.
// Devuelve: la nueva lista.
// NULL si falla la reserva de memoria.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	list = NULL;
	while (lst)
	{
		new = ft_lstnew(NULL);
		if (!new)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		new->content = f(lst->content);
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
