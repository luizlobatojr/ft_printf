#include "libft.h"

static int	ft_strlen_local(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_print_strings(int count, ...)
{
	va_list	args;
	char	*str;
	int		i;

	if (count <= 0)
		return ;
	va_start(args, count);
	i = 0;
	while (i < count)
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(null)";
		write(1, str, ft_strlen_local(str));
		write(1, "\n", 1);
		i++;
	}
	va_end(args);
}