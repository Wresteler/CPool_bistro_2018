##
## Makefile for Makefile in /home/remi/Projet/MyMakefile
## 
## Made by remi
## Login   <remi@epitech.net>
## 
## Started on  Thu Sep 12 17:01:12 2013 remi
## Last update Thu Sep 12 17:01:26 2013 remi
##

# TO do List :
# mettre les obj dans une repertoir
# Permertre de configurer

CC		=	clang

RM		=	rm -f

NAME		=	eval_expr

COMPILEFLAG	=	-ggdb3 -Wall -Wextra -pedantic -std=c99 -g

USELESS_F	=	*~ srcs/*~ include/*~

INCLUDE		=	-Iinclude/

DEBUG		=	with debug

UTEST_BIN	=	srcs/*.gcda

UTEST_OBJ	=	srcs/*.gcno

CFLAGS		=	$(COMPILEFLAG) $(INCLUDE)

SRC		=	main.c			\
			srcs/do_op.c		\
			srcs/eval_expr.c	\
			srcs/parse_nbr.c	\
			srcs/rm_spaces.c	\
			srcs/basics.c

OBJ		=	$(SRC:.c=.o)

$(OBJDIR)%.o:		%.c
			@$(CC) $(CFLAGS) -o $@ -c $<
			@if test -s $*.c; then \
			echo -e "\033[01m\033[35m Compiling $(DEBUG)\033[00m\
			\033[36m$(SRCPATH)$*.c\033[032m  [OK]\033[00m";\
			else \
			echo -e "\033[01m\033[33m Compiling $(DEBUG)\033[00m\
			\033[36m$(SRCPATH)$*.c\033[00m\  [Error]"; fi

$(NAME):	  	$(OBJ)
			@echo -e "\033[01m\033[31mLinking ...\033[00m"
			@$(CC) $(OBJ) -o $(NAME) $(CFLAGS)
			@echo -e "\033[01m\033[32mCompilation done => ${NAME}\033[00m"

all:			$(NAME)

clean:
			@$(RM) $(OBJ)
			@$(RM) $(UTEST_OBJ)
			@$(RM) $(USELESS_F)
			@echo -e "\033[01m\033[31mRemoving objects ...\033[00m"

fclean:			clean
			@$(RM) $(NAME)
			@$(RM) $(UTEST_BIN)
			@echo -e "\033[01m\033[31mRemoving binary: {${NAME}} ...\033[00m"

re:			fclean all

.PHONY:			all clean fclean re
