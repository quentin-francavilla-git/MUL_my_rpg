##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## M
##

SRC	=	./src/*.c \
		./src/create/*.c \
		./src/tools/*.c \
		./src/characters/jotaro/*.c \
		./src/characters/dio/*.c \
		./src/characters/kan/*.c \
		./src/characters/mid/*.c \
		./src/characters/joseph/*.c \
		./src/characters/pol/*.c \
		./src/characters/kakyo/*.c \
		./src/characters/mar/*.c \
		./src/characters/cha/*.c \
		./src/characters/hol/*.c \
		./src/characters/ice/*.c \
		./src/sprite_gestion/*.c \
		./src/env/*.c \
		./src/dialogues/*.c \
		./src/hud/other/*.c \
		./src/hud/fight/*.c \
		./src/fights/life/*.c \
		./src/fights/*.c \
		./src/display/*.c \
		./src/hud/inventory/*.c \
		./src/hud/quests/*.c \
		./src/items/*.c \
		./src/menu/*.c \
		./src/events/*.c \
		./src/characters/jotaro/stats/*.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

FLAG	=	-W -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	gcc $(SRC) -o $(NAME) -L./lib/my -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
	rm -f $(OBJ)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

#.PHONY
