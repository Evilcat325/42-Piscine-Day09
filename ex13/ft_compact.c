/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:58:55 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 16:19:18 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i;
	int		size;
	char	**head;

	i = 0;
	size = 0;
	while (i < length)
	{
		if (tab[i])
		{
			head[size] = tab[i];
			size++;
		}
		i++;
	}
	return (size);
}
