#include "libft.h"

static int ft_str_len(char *str)
{
	int len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int ft_total_length(int count, ...)
{
	va_list args;
	char *str;
	int total;
	int i;

	if (count <= 0)
		return (0);
	va_start(args, count);
	total = 0;
	i = 0;
	while (i < count)
	{
		str = va_arg(args, char *);
		total += ft_str_len(str);
		i++;
	}
	va_end(args);
	return (total);
}