##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

all:
	@make -C antman/
	@make -C giantman/

clean:
	@make clean -C antman/
	@make clean -C giantman/

fclean:
	@make fclean -C antman/
	@make fclean -C giantman/

re: fclean all