#include "libft.h"

int	ft_count_empty(int count, ...)
{
	va_list		args;
	int			i;
	int			empty_count;
	const char	*str;

	if (count <= 0)
		return (0);
	va_start(args, count);
	i = 0;
	empty_count = 0;
	while (i < count)
	{
		str = va_arg(args, const char *);
		if (str != NULL && str[0] == '\0')
			empty_count++;
		i++;
	}
	va_end(args);
	return (empty_count);
}