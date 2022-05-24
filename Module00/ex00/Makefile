# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 21:09:21 by mgo               #+#    #+#              #
#    Updated: 2022/05/24 21:29:40 by mgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror

SRC		=	megaphone.cpp

$(NAME)	:	$(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
	rm megaphone

re		:	clean all
