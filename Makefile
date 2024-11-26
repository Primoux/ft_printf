# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enchevri <enchevri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 21:35:03 by enchevri          #+#    #+#              #
#    Updated: 2024/11/26 13:40:56 by enchevri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = 	cc

CFLAGS	= 	-Wall -Wextra -Werror

NAME	=	libftprintf.a

SRCS =	ft_printf.c \
		print_format.c \
		print_char.c \
		print_digit.c \
		print_string.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re fclean clean