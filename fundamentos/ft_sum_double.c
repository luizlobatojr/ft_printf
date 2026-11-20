#include "libft.h"

double ft_sum_double(int count, ...)
{
	va_list	args;
	double	sum;
	int		i;

	if (count <= 0)
		return (0.0);
	va_start(args, count);
	sum = 0.0;
	i = 0;

	while (i < count)
	{
		sum += va_arg(args, double);
		i++;
	}
	va_end(args);
	return (sum);	
}