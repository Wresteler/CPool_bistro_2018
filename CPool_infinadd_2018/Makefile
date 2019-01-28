##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	infin_add

SRC	=	src/infin_add.c		\
		src/basic.c		\
		src/main.c		\
		src/infin_sub.c		\
		src/my_alloc.c		\
		src/aff_result.c	\
		src/str_to_int.c	\
		src/errors.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Iinclude -Wall -Wextra -pedantic -std=c99 -g -g3

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME) $(OBJ)
		rm -f *~
		rm -f src/*~
		rm -f include/*~
		rm -f vgcore*

re:		fclean all

.PHONY:		all clean fclean re
