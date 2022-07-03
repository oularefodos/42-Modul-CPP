NAME= polimorphisme

SRCS= Animal.cpp  Cat.cpp Dog.cpp  main.cpp Brain.cpp

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CXXFLAGS) $^ -o $@

%.o: %.cpp Animal.hpp Cat.hpp Dog.hp Brain.hpp
	c++ $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all