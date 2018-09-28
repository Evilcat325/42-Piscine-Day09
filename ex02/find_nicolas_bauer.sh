#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/28 12:50:06 by seli              #+#    #+#              #
#    Updated: 2018/09/28 12:50:06 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

grep -ie "@ct" -ie "bauer" | grep -oE "\(?\d{2,8}\)?-?\d{2,8}-?\d{2,8}" | grep -vE "\d{5}-\d{4}" | sort | uniq
