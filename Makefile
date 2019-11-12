##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	srcs/my_putnbr.c	\
		srcs/my_putstr.c	\
		srcs/my_putstr_np.c	\
		srcs/my_putchar.c	\
		srcs/my_puthexa.c	\
		srcs/my_puthexa_caps.c	\
		srcs/my_putoctal.c	\
		srcs/my_putuns.c	\
		srcs/my_putnbr_base.c	\
		srcs/my_putuint.c	\
		srcs/my_putbin.c	\
		srcs/arg.c	\
		srcs/arg2.c	\
		srcs/my_printf.c	\
		srcs/my_strlen.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re : fclean all
