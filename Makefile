# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 15:14:38 by lgottsch          #+#    #+#              #
#    Updated: 2024/10/16 14:12:56 by lgottsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCTIONS = ft_printf.c ft_strlen.c ft_putnbr_fd.c ft_putstr.c ft_putchar_fd.c \
			ft_putnbr_base.c ft_putuint.c


O_FILES = $(FUNCTIONS:.c =.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $()
	ar rcs $() $(O_FILES)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re