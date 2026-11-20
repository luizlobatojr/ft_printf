NAME		= libftprint.a
TEST_NAME	= test_bin
TEST_SRC	= test_main.c

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar
ARFLAGS		= rcs

SRCS		= ft_putchar.c \
			  ft_putnbr.c \
			  ft_print_numbers.c \
			  int ft_sum.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c libft.h
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
