/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:07:36 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 14:18:46 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 42) % 26 + 'a';
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 42) % 26 + 'A';
		i++;
	}
	return (str);
}
