##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	eval_expr

SRC	=	main.c			\
		srcs/eval_expr.c	\
		srcs/basics.c		\
		srcs/do_op.c		\
		srcs/rm_spaces.c	\
		srcs/parse_nbr.c

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
		rm -f srcs/*~
		rm -f srcs/*gcda
		rm -f srcs/*gcno
		rm -f include/*~
		rm -f vgcore*
		rm -f unit_tests/unit_tests
		rm -f unit_tests/*.o
		rm -f unit_tests/*.gcda
		rm -f unit_tests/*.gcno

re:		fclean all

.PHONY:		all clean fclean re
