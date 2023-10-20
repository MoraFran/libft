/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:21:59 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/18 16:43:58 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Toma como parámetro un nodo 'lst' y libera la memoria del contenido 
// utilizando la función 'del' dada como parámetro, además de liberar el nodo.
// La memoria de 'next' no debe liberarse.
// lst: el nodo a liberar.
// del: un puntero a la función utilizada para liberar el contenudo del nodo.
// Devuelve: nada.
// Función Aut.: Free.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
