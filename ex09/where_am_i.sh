#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/28 15:25:06 by seli              #+#    #+#              #
#    Updated: 2018/09/28 15:25:06 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ip=$(ifconfig | grep 'inet' | grep -v 'inet6' | grep -v '127.0.0.1' | grep -oE '(\d{1,3}.\d{1,3}){3}')
host=$(ifconfig | grep 'inet' | grep -v 'inet6' | grep -v '127.0.0.1' | grep -oE '(\d{1,3}.\d{1,3}){3}' | wc -l | bc)

if [ $host -eq 0 ]
then
	echo "I am lost!"
else
	echo $ip | tr ' ' '\n'
fi
