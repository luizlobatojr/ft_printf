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

static int	get_digits(long number, char *digits)
{
	int	count;

	count = 0;
	if (number == 0)
		digits[count++] = '0';
	while (number > 0)
	{
		digits[count++] = (number % 10) + '0';
		number /= 10;
	}
	return (count);
}

static int	print_digits(char *digits, int count)
{
	int	printed;

	printed = 0;
	while (count > 0)
	{
		count--;
		if (ft_putchar(digits[count]) == -1)
			return (-1);
		printed++;
	}
	return (printed);
}

int	ft_putnbr(int n)
{
	char	digits[11];
	long	number;
	int		digit_count;
	int		printed;

	number = n;
	digit_count = 0;
	printed = 0;
	if (number < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		printed++;
		number = -number;
	}
	digit_count = get_digits(number, digits);
	digit_count = print_digits(digits, digit_count);
	if (digit_count == -1)
		return (-1);
	printed += digit_count;
	return (printed);
}
