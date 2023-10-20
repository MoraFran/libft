/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:59:34 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/18 13:53:04 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Añade el nodo 'new' al final de la lista 'lst'
// lst: el puntero al primer nodo de una lista.
// new:  el puntero a un nodo que añadir a la lista.
// devuelve: nada.

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		aux = *lst;
		aux = ft_lstlast(aux);
		(aux)->next = new;
	}
}
/*
int	main(void)
{
	t_list	**lst;
	t_list	*new;
	void	*num;

	(*lst)->content = ((int)num =  1);
	(*lst)->next->content = ((int)num + 1);
	(*lst)->next->next->content = ((int)num + 1);
	(*lst)->next->next->next->content = NULL;
	new->content = (void*)42;
	new->next = NULL;

	ft_lstadd_back(lst, new);
	while (*lst != NULL)
	{
		printf("%d\n", (int)(*lst)->content);
		*lst = (*lst)->next;
	}
}*/
