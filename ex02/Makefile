NAME = FragTrap
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INC = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re