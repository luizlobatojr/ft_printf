#include "libft.h"

void ft_print_numbers(int count, ...)
{
	va_list args;
	int i = 0;

	va_start(args, count);

	while (i < count)
	{
		ft_putnbr(va_arg(args, int));
		if (i < count - 1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	va_end(args);
}
