/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 06:02:15 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/21 06:02:15 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_specifier(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (spec == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (spec == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (spec == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if (spec == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (spec == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (spec == '%')
		return (ft_putchar('%'));
	return (-1);
}

static int	handle_conversion(const char *format, int *index, va_list args)
{
	int	result;

	if (format[*index + 1] == '\0')
		return (-1);
	result = handle_specifier(format[*index + 1], args);
	*index += 2;
	return (result);
}

static int	process_format(const char *format, va_list args)
{
	int	i;
	int	total;
	int	ret;

	i = 0;
	total = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			ret = handle_conversion(format, &i, args);
		else
			ret = ft_putchar(format[i++]);
		if (ret == -1)
			return (-1);
		total += ret;
	}
	return (total);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total;

	if (!format)
		return (-1);
	va_start(args, format);
	total = process_format(format, args);
	va_end(args);
	return (total);
}
