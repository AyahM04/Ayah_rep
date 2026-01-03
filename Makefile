NAME = libftprintf.a

SRC = ft_printf.c ft_format.c ft_putchar_pf.c ft_putstr_pf.c \
      ft_putnbr_pf.c ft_putuint_pf.c ft_puthex_pf.c ft_putptr_pf.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
