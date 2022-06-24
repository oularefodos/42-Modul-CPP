NAME= reference

SRCS= main.cpp

CFLAGS= -Wall -Wextra -Werror

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $^ -o $@

%.o: %.cpp 
	c++ $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all