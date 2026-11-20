#include <limits.h>
#include "libft.h"

int	main(void)
{
	ft_print_numbers(4, 10, 20, 30, 40);
	ft_print_numbers(3, -42, 0, 7);
	ft_print_numbers(2, INT_MIN, INT_MAX);
	ft_print_numbers(0);
	return (0);
}
