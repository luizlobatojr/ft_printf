NAME = programa
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
SRC = main.c matematica.c
OBJ = $(SRC:.c=.o)

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)

bonus: .bonus
.bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(ARFLAGS) $(NAME) $^
	@touch .bonus

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c matematica.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
