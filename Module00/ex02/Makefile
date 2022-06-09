# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 10:19:54 by mgo               #+#    #+#              #
#    Updated: 2022/06/09 10:20:14 by mgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tests

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

rm			=	rm -f

SRC			=	tests.cpp \
				Account.cpp
OBJ			=	$(SRC:.cpp=.o)

%.o		:	%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

all		:	$(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re		:
	make fclean
	make all

.PHONY	:	all clean fclean re
