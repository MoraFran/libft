/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:34:38 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/17 14:04:55 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Crea un nuevo nodo utilizando malloc(3). La variable miembro 'content' se 
// inicializa con el contenido del parámetro 'content'. 
// La variable 'next' con NULL.
// content = el contenido con el que crear el nodo.
// Devuelve el nuevo nodo.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (void *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
