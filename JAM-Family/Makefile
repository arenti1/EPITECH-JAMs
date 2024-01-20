##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=	src/initialize.cpp	\
			src/start.cpp	\
			src/events.cpp	\
			src/personalityQuiz.cpp	\
			src/the_character.cpp	\
			src/main.cpp	\

SRC2	=	initialize.cpp	\
			start.cpp	\
			events.cpp	\
			personalityQuiz.cpp		\
			the_character.cpp	\
			main.cpp	\

OBJ	=	$(SRC2:.cpp=.o)

NAME	=	simpsons

all: $(NAME)

$(NAME):
	g++ -c $(SRC)
	g++ $(OBJ) -o $(NAME) -lsfml-graphics -lsfml-window -lsfml-system
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:	fclean all
