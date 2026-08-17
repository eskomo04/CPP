NAME=replacE

CXX=c++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= main.cpp
OBJS= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY: all fclean clean re