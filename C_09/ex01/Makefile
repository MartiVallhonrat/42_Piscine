# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 15:02:33 by mvallhon          #+#    #+#              #
#    Updated: 2023/11/07 20:42:35 by mvallhon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

PRE = ./srcs/

OBJS = ${SRCS.c=.o}

SRCS = ${addprefix ${PRE}, ${SRC}}

HEAD = ./includes/

NAME = libft.a

AR = ar rc

RM = rm -f

LIB = ranlib

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

all: 
	$(NAME)

.c.o:
	$(GCC) $(CFALGS) -c -l $(HEAD) $< -o $(<:.c=.o)

$(NAME):
	$(OBJS) $(AR) $(NAME) $(OBJS) $(LIB) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	fclean all

.PHONY: all clean fclean re
