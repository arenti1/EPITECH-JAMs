SRC =		src/initialize.cpp	\
			src/tools.cpp	\
			src/events.cpp	\
			src/start_screen.cpp	\
			src/end_screen.cpp	\
			src/main.cpp

NAME = 		jam

OBJ	=	$(SRC:.cpp=.o)

PP = g++

CFLAGS += -g -Werror -Wextra -Wall -Wshadow -std=c++20

all: $(NAME)

$(NAME): $(OBJ)
	$(PP) -o $(NAME) $(OBJ) -lsfml-graphics -lsfml-window -lsfml-system -I./SFML/include/ -lncurses
	$(RM) $(OBJ)
re: fclean all

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) libmy.a *.o $(NAME)

.PHONY : all main clean fclean