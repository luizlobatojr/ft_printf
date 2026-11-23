#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/22 13:26:44 by lubatist          #+#    #+#              #
#    Updated: 2026/11/23 14:44:32 by lubatist         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putchar.c ft_putstr.c ft_printf.c ft_putnbr.c ft_putunsigned.c \
       ft_putbase.c ft_puthex.c ft_putbase.c ft_putptr.c 

OBJS = $(SRCS:.c=.o)
TESTE = main

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o $(TESTE)
	./$(TESTE)
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME) $(TESTE)
re: fclean all

.PHONY: all clean fclean re test
