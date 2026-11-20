#include "libft.h"

int	ft_max(int count, ...)
{
	va_list	args;
	int		max;
	int		current;
	int		i;

	if (count <= 0)
		return (0);
	va_start(args, count);
	
	max = va_arg(args, int);
	i = 1;
	while (i < count)
	{
		current = va_arg(args, int);
		if (current > max)
			max = current;
		i++;
	}
	va_end(args);
	return (max);
}