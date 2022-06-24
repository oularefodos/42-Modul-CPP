NAME= human

SRCS= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

CFLAGS= -Wall -Wextra -Werror

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $^ -o $@

%.o: %.cpp main.h HumanA.hpp HumanB.hpp Weapon.hpp
	c++ $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all