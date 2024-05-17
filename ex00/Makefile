NAME 	= Claptrap
CC 		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= main.cpp Claptrap.cpp


$(NAME) : all

all :
	g++ $(FLAGS) $(OBJS) $(NAME)


clean : 
	rm -rf $(OBS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re fclean clean all