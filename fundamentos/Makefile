NAME = libftprintf.a
TEST_NAME = test_bin
TEST_SRC = test_main.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar
ARFLAGS = rcs

SRCS = 		ft_putchar.c \
			ft_putnbr.c \
			ft_print_numbers.c \
			ft_sum.c \
			ft_max.c \
			ft_min.c \
			ft_average.c \
			ft_sum_double.c \
			ft_print_strings.c \
			ft_total_length.c \
			ft_count_empty.c \
			ft_compare_strings.c \
			ft_sum_positive.c

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
