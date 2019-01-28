##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	eval_expr

NAME_T	=	unit_tests

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-I../include/  

CFLAGS	+=	-W -Wall -Wextra

CFLAGS	+=	-fprofile-arcs -ftest-coverage

SRCS_T	=	../srcs/eval_expr.c	\
		../srcs/basics.c	\
		../srcs/do_op.c		\
		../srcs/rm_spaces.c	\
		../srcs/parse_nbr.c	\
		tests_eval_expr.c

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
