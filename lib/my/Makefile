##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

NAME	=	libmy.a

SRC    =	my_strsame.c \
			my_strcat.c \
			my_putstr.c \
			my_strlen.c \
			my_putchar.c \
			my_getnbr.c \
			my_put_nbr.c \
			my_revstr.c \
			my_strcpy.c \
			my_printf.c \
			my_numlen.c \
			my_put_nbr_bin.c \
			my_put_nbr_hexa.c \
			my_put_nbr_maj.c \
			my_put_nbr_octal.c \
			my_put_nbr_unsigned.c \
			use.c \
			use2.c \
			my_str_to_word_array.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I../../include

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		ar rc $(NAME) $(OBJ)
clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
