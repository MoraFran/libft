/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:44:37 by frmora-m          #+#    #+#             */
/*   Updated: 2023/10/13 17:49:34 by frmora-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (con malloc(3)) un array de strings resultante de separar 
// la string "s" en substrings utilizando el carácter "c" como delimitador.
// El array debe terminar con un puntero NULL.
// s = la string a separar
// c = el carácter delimitador
// dvuelve el array de nuevas strings resultante de la separación.
// NULL si falla la reserva de memoria.

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **array, int j)
{
	while (--j >= 0)
		free(array[j]);
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = -1;
	array = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (++j < ft_count_word(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		array[j] = ft_substr(s, i, size);
		if (!array[j])
		{
			ft_free(array, j);
			return (NULL);
		}
		i += size;
	}
	array[j] = 0;
	return (array);
}
/*
int	main(void)
{
	char const	s[] = "HOLA MUNDO CRUEL";
	int			c = ' ';

	printf("%d", split(s, c));
	return (0);
}*/
