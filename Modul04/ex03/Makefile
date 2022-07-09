NAME= materia

SRCS= AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CXXFLAGS) $^ -o $@

%.o: %.cpp AMateria.hpp Character.hpp Cure.hpp  ICharacter.hpp IMateriaSource.hpp Ice.hpp  MateriaSource.hpp
	c++ $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all