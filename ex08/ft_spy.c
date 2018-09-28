/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:49:55 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 15:18:54 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define PRESIDENT "president"
#define ATTACK "attack"
#define BAUER "bauer"

char	*ft_strlowcase(char *str)
{
	char *head;

	head = str;
	while (*head)
	{
		if ('A' <= *head && *head <= 'Z')
			*head -= 'A' - 'a';
		head++;
	}
	return (str);
}

int		ft_strsame(char *s1, char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (*us1 && *us2)
	{
		if (*us1 != *us2)
			return (0);
		us1++;
		us2++;
	}
	if (*us1 == ' ' || *us1 == '\t' || *us1 == '\n'
			|| *us1 == 'v' || *us1 == 'f' || *us1 == 'r')
		return (1);
	return (0);
}

int		ft_alert(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == 'v' || *str == 'f' || *str == 'r')
		str++;
	if (ft_strsame(str, PRESIDENT)
		|| ft_strsame(str, ATTACK)
		|| ft_strsame(str, BAUER))
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	while (argc > 1)
	{
		if (ft_alert(ft_strlowcase(argv[argc - 1])))
		{
			write(1, "Alert!!!\n", 9);
			break ;
		}
		argc--;
	}
	return (0);
}
