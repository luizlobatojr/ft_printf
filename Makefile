#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/21 06:02:54 by lubatist          #+#    #+#              #
#    Updated: 2026/11/21 06:02:54 by lubatist         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a
TEST_NAME = test_bin
TEST_SRC = main.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar
ARFLAGS = rcs

SRCS =		ft_printf.c \
			ft_putchar.c \
			ft_puthex.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putunsigned.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) $(NAME) -o $(TEST_NAME)
	./$(TEST_NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(TEST_NAME) a.out ft_print_numbers

re: fclean all

.PHONY: all clean fclean re test
