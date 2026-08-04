NAME=phonebook

CXX= c++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= Contact.cpp PhoneBook.cpp main.cpp
OBJS= $(SRCS:.cpp=.o)
HEADERS= Contact.hpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
