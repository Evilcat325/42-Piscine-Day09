/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 16:25:40 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 16:53:44 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_decrypt.h"

t_perso	*g_head;

int			ft_person_count(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str == ';')
			count++;
		str++;
	}
	if (count > 0)
		count++;
	return (count);
}

char		*ft_strcpy(char *str, char d)
{
	int		i;
	char	*cpy;

	i = 0;
	while (str[i] && str[i] != d)
		i++;
	cpy = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != d)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

t_perso		**ft_decrypt(char *str)
{
	int		i;
	int		person_count;

	person_count = ft_person_count(str);
	g_head = malloc(sizeof(t_perso) * (ft_person_count(str) + 1));
	i = 0;
	while (i < person_count)
	{
		g_head[i].age = ft_strcpy(str, '|');
		while (*str && *str != '|')
			str++;
		str++;
		g_head[i].nom = ft_strcpy(str, ';');
		i++;
	}
	return (&g_head);
}
