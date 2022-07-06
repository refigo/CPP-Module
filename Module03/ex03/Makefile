# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 18:35:56 by mgo               #+#    #+#              #
#    Updated: 2022/07/06 10:50:57 by mgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	diamondtrap

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
#CXXFLAGS	+=	-fsanitize=address -g

rm			=	rm -f

INC			=	-I./

SRC			=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				DiamondTrap.cpp
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
