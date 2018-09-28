/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 16:21:16 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 16:23:49 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	bits;

	bits = 0;
	while (value > 0)
	{
		if (value % 2 == 1)
			bits++;
		value = value >> 1;
	}
	return (bits);
}
