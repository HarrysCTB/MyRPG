##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for libmy.a, adapted for ARM64 architecture on Mac M1
##

SRC	=	my_swap.c	\
		my_getnbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcat.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strcmp.c	\
		my_strncmp.c	\
		my_strncat.c	\
		my_strncpy.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_printf_1.c	\
		my_printf_2.c	\
		my_printf_3.c	\
		my_printf_4.c	\
		my_printf_5.c	\
		my_strtowordarray.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

LIB_DIR = -L/opt/homebrew/lib
INC_DIR = -I/opt/homebrew/include
LIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CFLAGS += $(INC_DIR) -arch arm64

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../..

clean:
	rm -rf *~ \#*\# .\#* *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
