##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	calc

NAME_T	=	unit_tests

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-I../include/

CFLAGS	+=	-W -Wall -Wextra

CFLAGS	+=	-fprofile-arcs -ftest-coverage

SRCS_T	=	../srcs/memory.c		\
		../srcs/basics.c		\
		../srcs/errors.c		\
		../srcs/selector.c		\
		../srcs/getnb_add.c		\
		../srcs/select_nb.c		\
		../srcs/addition.c		\
		../srcs/calcul.c		\
		tests_bistro-matic_int.c

OBJS_T	=	$(SRCS_T:.c=.o)

T_FLAGS =	-lgcov -lcriterion

all:		$(NAME)

$(NAME):	$(OBJS_T)
		$(CC) -o $(NAME_T) $(OBJS_T) $(T_FLAGS)
clean:
		$(RM) $(OBJS_T)

fclean:		clean
		$(RM) $(NAME_T)
		rm -f *~
		rm -f *.gcda
		rm -f *.gcno
		rm -f ../srcs/*.gcda
		rm -f ../srcs/*.gcno

re:		fclean all

.PHONY:		all clean fclean re
