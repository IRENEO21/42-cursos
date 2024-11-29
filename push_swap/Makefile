# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchen <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 18:43:07 by bchen             #+#    #+#              #
#    Updated: 2024/11/29 18:43:32 by bchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = aux1.c aux2.c aux3.c aux4.c bigmoves.c creator.c creator2.c \
ft_printf.c ft_printf_aux.c orders_1.c orders_2.c smallmoves1.c smallmoves2.c main.c
OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: 
	$(MAKE) -C bonus

fcbonus: 
	$(MAKE) -C bonus fclean

rebonus: 
	$(MAKE) -C bonus re

.PHONY: all clean fclean re bonus fcbonus rebonus
