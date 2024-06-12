NAME = libftprintf.a
LIBFTNAME = libft.a

SOURCES = ft_printf.c ft_putptr.c ft_putchar.c ft_putnbr.c \
ft_putstr.c ft_putunsigned.c ft_puthex.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFTDIR = libft

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft	$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS)
	cd $(LIBFTDIR) && make clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBFTDIR) && make fclean

re: fclean all

.PHONY: all clean fclean re
