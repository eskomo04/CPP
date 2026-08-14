NAME=UnnecessaryViolence

CXX= c++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean : 
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY: all re clean fclean