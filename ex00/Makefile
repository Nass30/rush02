# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nben-yaa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 18:13:39 by nben-yaa          #+#    #+#              #
#    Updated: 2017/08/19 18:13:40 by nben-yaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
FLAGS=-Wall -Wextra -Werror
OUT=colle-02

all :
	$(CC) -Iincludes $(FLAGS) -o $(OUT) srcs/*.c
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(OUT)
re : fclean, all
