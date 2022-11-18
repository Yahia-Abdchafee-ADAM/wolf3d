SRC	=	src/wolf3d_main.c	\
		src/wolf3d_game_loop.c \
		src/wolf3d_free.c		\

OBJ	=	$(SRC:.c=.o)

BINARY_NAME	=	wolf34

INCLUDE	=	include/

CPPFLAGS	=	-I ./$(INCLUDE)

all:		NAME

NAME:		$(OBJ)
			gcc $(OBJ) -o $(BINARY_NAME) $(CPPFLAGS) -lSDL2 -lSDL2main

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(BINARY_NAME)

re:			fclean all
			rm -f $(OBJ)
