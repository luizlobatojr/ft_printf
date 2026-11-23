/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:25:20 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/23 15:02:01 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putspec(char spec, va_list *args)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (spec == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (spec == 'u')
		return (ft_putunsigned(va_arg(*args, unsigned int)));
	if (spec == 'x' || spec == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), spec));
	if (spec == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	if (spec == '%')
		return (ft_putchar('%'));
	return (ft_putchar(spec));
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!input)
		return (-1);
	va_start(args, input);
	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			count += ft_putspec(input[i + 1], &args);
			i += 2;
		}
		else
			count += write(1, &input[i++], 1);
	}
	va_end(args);
	return (count);
}
