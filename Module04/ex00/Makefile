# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 09:23:07 by mgo               #+#    #+#              #
#    Updated: 2022/07/07 14:08:20 by mgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
#CXXFLAGS	+=	-fsanitize=address -g

rm			=	rm -f

INC			=	-I./

SRC			=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp
OBJ			=	$(SRC:.cpp=.o)

%.o		:	%.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

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
