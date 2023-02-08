# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pealexan <pealexan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 08:46:18 by pealexan          #+#    #+#              #
#    Updated: 2023/02/08 09:41:26 by pealexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
NAMELIBFT	= libft.a

#----------DIRS----------#
SRCDIR = ./src/
OBJDIR = ./objs/
LIBFTDIR = ./libft/
HEADERDIR = ./headers/

SRC = 	src/ft_printf.c \
	src/ft_format_putaddress2.c \
	src/ft_format_putaddress.c \
	src/ft_format_putchar.c \
	src/ft_format_lowerhexa.c \
	src/ft_format_upperhexa.c \
	src/ft_format_putnbr.c \
	src/ft_format_putposnbr.c \
	src/ft_format_putstr.c \
	src/ft_format_putunsignnbr.c \
	src/ft_get_format.c \
	src/ft_get_hexastr.c \
	src/ft_printf.c \
	src/ft_putaddress.c \
	src/ft_putchar.c \
	src/ft_puthexa.c \
	src/ft_putnbr.c \
	src/ft_putstr.c \
	src/ft_putunsignednbr.c \

#--------COMMANDS--------#
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

OBJ = ${SRC:.c=.o}

#---------RULES---------#
.c.o:
		$(CC) $(CFLAGS) -c -I$(HEADERDIR) $< -o ${<:.c=.o}

all: 		$(NAME)

bonus: 	all
	
$(NAME): 	$(OBJ)
		cd $(LIBFTDIR) && $(MAKE) && cp $(NAMELIBFT) ../$(NAME)
		$(AR) $(NAME) $(OBJ)
	
clean:
		$(RM) $(OBJ)
		cd $(LIBFTDIR) && $(MAKE) clean

fclean: 	clean
		$(RM) $(NAME)
		cd $(LIBFTDIR) && $(MAKE) fclean
	
re: fclean all
