NAME= PhoneBook

SRCS= contact.cpp main.cpp phonebook.cpp

CFLAGS= -Wall -Wextra -Werror

INCUDE= phonebook.h contact.hpp phonebook.hpp

OBJS :=$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $^ -o $@

%.o: %.cpp $(INCUDE)
	c++ $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) bonus

re: fclean all