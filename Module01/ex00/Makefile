NAME		=	BraiiiiiiinnnzzzZ

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

rm			=	rm -f

INC			=	-I./

SRC			=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp
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
