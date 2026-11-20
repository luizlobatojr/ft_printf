
#include "libft.h"

double ft_average(int count, ...)
{
	va_list	args;
	long	sum;
	int		i;

	if (count <= 0)
		return (0.0);
	va_start(args, count);
	
	sum = 0;
	i = 0;
	while (i < count)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return ((double)sum / (double)count);
}