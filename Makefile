##
## EPITECH PROJECT, 2019
## PSU_my_sokoban_2019
## File description:
## Makefile
##

CC	= gcc -W -Wall -lncurses

RM	= rm -f

LIB = ./lib/

FILE = ./src/

SRC	= 	$(LIB)my_putchar.c \
		$(LIB)my_strlen.c \
		$(LIB)my_putstr.c \
		$(FILE)display/display_game.c \
		$(FILE)display/display.c \
		$(FILE)display/quit.c \
		$(FILE)display/win.c \
		$(FILE)free/free.c \
		$(FILE)free/free2.c \
		$(FILE)init/ini_width.c \
		$(FILE)init/ini_player.c \
		$(FILE)init/ini_map.c \
		$(FILE)init/ini_test.c \
		$(FILE)movement/event_reset.c \
		$(FILE)movement/direction.c \
		$(FILE)movement/move_box.c \
		$(FILE)movement/mouvement.c \
		$(FILE)movement/key.c \
		$(FILE)tab/read_map.c \
		$(FILE)tab/create_tab.c \
		$(FILE)tab/check_pos.c \
		$(FILE)usage/usage.c \
		$(FILE)main.c \

OBJ	= $(SRC:.c=.o)

NAME	= my_sokoban

CFLAGS = -I./include

all:	$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all