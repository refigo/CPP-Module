# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgo <mgo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 15:19:30 by mgo               #+#    #+#              #
#    Updated: 2022/06/09 10:23:14 by mgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	test

CXX			=	c++
#CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

rm			=	rm -f

SRC			=	main.cpp \
				PhoneBook.cpp \
				Contact.cpp \
				utils.cpp
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
