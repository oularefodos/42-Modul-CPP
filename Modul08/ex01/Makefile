NAME= span

SRCS= main.cpp Span.cpp

CFLAGS= -Wall -Wextra -Werror -std=c++98

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $^ -o $@

%.o: %.cpp Span.hpp
	c++ $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all