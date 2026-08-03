NAME=phoneBook

CXX= c++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= Contact.cpp, PhoneBook.cpp, main.cpp
OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
