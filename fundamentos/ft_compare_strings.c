#include "libft.h"

static int	ft_str_eq(const char *s1, const char *s2)
{
	int	i;

	if (s1 == s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (s1[i] == s2[i]);
}

int	ft_compare_strings(int count, ...)
{
	va_list		args;
	const char	*first;
	const char	*current;
	int			all_equal;
	int			i;

	if (count <= 0)
		return (0);
	va_start(args, count);
	first = va_arg(args, const char *);
	all_equal = 1;
	i = 1;
	while (i < count)
	{
		current = va_arg(args, const char *);
		if (!ft_str_eq(first, current))
			all_equal = 0;
		i++;
	}
	va_end(args);
	return (all_equal);
}