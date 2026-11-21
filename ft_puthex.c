/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 06:02:29 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/21 06:02:30 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_reverse(char *buf, int len)
{
	int	count;

	count = 0;
	while (len > 0)
	{
		len--;
		if (ft_putchar(buf[len]) == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_puthex(unsigned int n, int uppercase)
{
	char	*base;
	char	buf[16];
	int		len;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar('0'));
	len = 0;
	while (n > 0)
	{
		buf[len] = base[n % 16];
		n = n / 16;
		len++;
	}
	return (print_hex_reverse(buf, len));
}
