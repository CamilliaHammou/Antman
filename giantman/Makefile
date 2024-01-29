##
## EPITECH PROJECT, 2021
## day09
## File description:
## makefile
##

SRC 	=	$(shell find *.c)

OBJ	=	$(SRC:.c=.o)

NAME 	= 	giantman

all: 	$(NAME)

$(NAME): 	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -rf *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
