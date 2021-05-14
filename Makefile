##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

NAME    =	rpg

GAME_PATH = ./src/game

SRC    =	src/main.c 										\
			$(GAME_PATH)/game.c 							\
			$(GAME_PATH)/draw.c 							\
			$(GAME_PATH)/fight.c 							\
			$(GAME_PATH)/init_variable/init_struct1.c 		\
			$(GAME_PATH)/init_variable/init_struct2.c 		\
			$(GAME_PATH)/set_pokemon/set_poke1.c 			\
			$(GAME_PATH)/set_pokemon/set_poke2.c 			\
			$(GAME_PATH)/set_variable/set_variable1.c 		\
			$(GAME_PATH)/set_variable/set_variable2.c		\
			$(GAME_PATH)/player_move.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -I./include/ -g3

LDFLAG = 	-L./lib/my -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all     :	$(NAME)

$(NAME) :	$(OBJ)
		make -C lib/my
		gcc -o $(NAME) $(SRC) $(CFLAGS) $(LDFLAG)
		make clean

%.o: %.c
	gcc -c $< -o $@ -g3 $(CFLAGS)

clean	:
		make -C lib/my clean
		rm -f $(OBJ)


fclean	:	clean
		make -C lib/my fclean
		rm -f $(NAME)

re : fclean all
