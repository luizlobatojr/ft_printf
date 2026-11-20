#include "libft.h"

int	ft_sum(int quantidade, ...)
{
	va_list	args;
	int		i;
	int		resultado;

	resultado = 0;
	i = 0;
	va_start(args, quantidade);
	while (i < quantidade)
	{
		resultado += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (resultado);
}