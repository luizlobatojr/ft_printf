#include "libft.h"

int	ft_sum_positive(int count, ...)
{
	va_list	args;
	int		sum;
	int		current;
	int		i;

	if (count <= 0)
		return (0);
	va_start(args, count);
	sum = 0;
	i = 0;
	while (i < count)
	{
		current = va_arg(args, int);
		if (current > 0)
			sum += current;
		i++;
	}
	va_end(args);
	return (sum);
}