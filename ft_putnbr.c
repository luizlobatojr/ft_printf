/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 06:02:33 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/21 06:02:33 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_digits(long num, int *total)
{
	int	written;

	if (num >= 10)
	{
		if (print_digits(num / 10, total) == -1)
			return (-1);
	}
	written = ft_putchar((num % 10) + '0');
	if (written == -1)
		return (-1);
	*total += written;
	return (0);
}

int	ft_putnbr(int n)
{
	long	num;
	int		total;
	int		written;

	num = n;
	total = 0;
	if (num < 0)
	{
		written = ft_putchar('-');
		if (written == -1)
			return (-1);
		total += written;
		num = -num;
	}
	if (print_digits(num, &total) == -1)
		return (-1);
	return (total);
}
