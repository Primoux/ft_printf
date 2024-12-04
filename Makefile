.PHONY: all clean fclean re

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(LIBFT_DIR)

NAME = libftprintf.a

SRCS = ft_printf.c \
	print_digit.c \
	print_format.c \
	print_pointer.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c ft_printf.h ./libft/*.c ./libft/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all