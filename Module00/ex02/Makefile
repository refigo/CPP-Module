NAME		=	test

CXX			=	c++
#CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

rm			=	rm -f

SRC			=	mgo.cpp \
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
