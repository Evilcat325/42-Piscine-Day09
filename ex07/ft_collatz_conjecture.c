/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:44:02 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 14:49:35 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2));
	else
		return (ft_collatz_conjecture(base * 3 + 1));
}
