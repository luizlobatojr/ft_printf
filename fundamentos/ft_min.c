#include "libft.h"

int	ft_min(int count, ...)
{
	va_list	args;
	int		min;
	int		current;
	int		i;

	if (count <= 0)
		return (0);
	va_start(args, count);
	min = va_arg(args, int);
	i = 1;
	while (i < count)
	{
		current = va_arg(args, int);
		if (current < min)
			min = current;
		i++;
	}
	va_end(args);
	return (min);
}