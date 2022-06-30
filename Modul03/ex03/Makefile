NAME= Diamondtrap

SRCS= ClapTrap.cpp    DiamondTrap.cpp FragTrap.cpp    ScavTrap.cpp    main.cpp

CFLAGS= -Wall -Wextra -Werror -std=c++98

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $^ -o $@

%.o: %.cpp ClapTrap.hpp    DiamondTrap.hpp FragTrap.hpp    ScavTrap.hpp
	c++ $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all