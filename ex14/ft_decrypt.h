/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 16:26:16 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 16:47:38 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DECRYPT_H
# define FT_DECRYPT_H
# include <stdlib.h>

typedef struct	s_perso
{
	char	*age;
	char	*nom;
}				t_perso;

int			ft_person_count(char *str);
char		*ft_strcpy(char *str, char d);
t_perso		**ft_decrypt(char *str);

#endif
