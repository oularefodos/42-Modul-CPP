NAME= polimorphisme

SRCS= Animal.cpp  Cat.cpp Dog.cpp WrongAnnimal.cpp WrongCat.cpp  main.cpp

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CXXFLAGS) $^ -o $@

%.o: %.cpp Animal.hpp Cat.hpp Dog.hp WrongAnnimal.hpp WrongCat.hpp
	c++ $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all