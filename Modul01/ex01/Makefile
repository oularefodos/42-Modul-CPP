NAME= zombies

SRCS= Zombie.cpp main.cpp zombieHorde.cpp

CFLAGS= -Wall -Wextra -Werror

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $^ -o $@

%.o: %.cpp Zombie.hpp
	c++ $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all