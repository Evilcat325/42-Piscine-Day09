/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:44:20 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 15:57:32 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define TRUE 1
# define OPEN 1
# define CLOSE 0
# include <unistd.h>

typedef int		t_bool;

typedef struct	s_door
{
	int	state;
}				t_door;

void			ft_putstr(char *str);
void			open_door(t_door *door);
void			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);

#endif
