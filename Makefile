##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile for my_rpg project that supports multiple architectures and operating systems.
##

SRC =	srcs/variable_affectation.c \
	srcs/destroy.c \
	srcs/events.c \
	srcs/setup.c \
	srcs/fonction.c \
	srcs/main.c

OBJ = $(SRC:.c=.o)

NAME = my_rpg

# Detect OS and Machine Architecture
UNAME_S := $(shell uname -s)
UNAME_M := $(shell uname -m)

# Conditional compilation flags
CFLAGS = -I./include # Add path to your include files here

# For macOS ARM64 (e.g., M1/M2 chips), add the -arch arm64 flag
ifeq ($(UNAME_S),Darwin)
    ifeq ($(UNAME_M),arm64)
        CFLAGS += -arch arm64
    endif
endif

# Libraries
LIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

# Compilation rule
all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my # Assuming you have a library to compile
	gcc $(CFLAGS) -o $(NAME) $(OBJ) $(LIBS)

# Object files rule
%.o: %.c
	gcc $(CFLAGS) -o $@ -c $<

# Clean object files
clean:
	rm -f $(OBJ)
	make clean -C lib/my # Clean in library directory if needed

# Full clean, including the binary
fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my # Full clean in library directory if needed

# Rebuild everything
re: fclean all

# Avoid conflicts between filenames and make rules
.PHONY: all clean fclean re
