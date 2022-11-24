# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pealexan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 08:46:18 by pealexan          #+#    #+#              #
#    Updated: 2022/11/14 08:46:22 by pealexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_printf.c \
	ft_putaddress.c \
	ft_putchar.c \
	ft_puthexa.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putunsignednbr.c \

OBJ = ${SRC:.c=.o}

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	
clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	
re: fclean all
