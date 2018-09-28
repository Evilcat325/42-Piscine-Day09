/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 12:14:06 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 12:45:35 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 ", (hour % 12 == 0) ? 12 : hour % 12);
	if ((hour % 24) < 12)
		printf("A.M. ");
	else
		printf("P.M. ");
	printf("AND %d.00 ", ((hour + 1) % 12 == 0) ? 12 : (hour + 1) % 12);
	if ((hour + 1) % 24 < 12)
		printf("A.M.");
	else
		printf("P.M.");
	printf("\n");
}
