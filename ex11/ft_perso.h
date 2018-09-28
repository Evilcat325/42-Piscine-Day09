/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:42:47 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 15:43:10 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
# define SAVE_THE_WORLD "savethe world"

typedef struct		s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}					t_perso;

#endif
