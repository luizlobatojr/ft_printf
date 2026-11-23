/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:25:20 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/23 13:53:58 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	//int	ret;
	int	i;

	va_start(args, input);
	i = 0;
	while (input[i])
	{	
		if(input[i] == '%' && input[i + 1])
		{	
			if (input[i + 1] == 'c')
			{
				ft_putchar(va_arg(args, int));
				i += 2;
			}
			if (input[i] && '%' && input[i + 1] == 's')
			{
				ft_putstr(va_arg(args, char *));
				i += 2;
			}
			if (input[i] && '%' && (input[i + 1] == 'd' || input[i + 1] == 'i'))
			{
				ft_putnbr(va_arg(args, int));
				i += 2;
			}
			if (input[i] && '%' && (input[i + 1] == 'u' || input[i + 1] == 'u'))
			{
				ft_putunsigned(va_arg(args, unsigned int));
				i += 2;
			}
			if (input[i] && '%' && (input[i + 1] == 'x' || input[i + 1] == 'X'))
			{
				ft_puthex(va_arg(args, unsigned int), input[i + 1]);
				i += 2;
			}
			if (input[i] && '%' && (input[i + 1] == 'p'))
			{
				ft_putptr(va_arg(args, void *));
				i += 2;
			}
			if (input[i] == '%' && (input[i + 1] == ' '))
				return (ft_putchar('%'));
		}
		write (1, &input[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}
