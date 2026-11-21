/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 06:02:37 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/21 06:02:37 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_ptr_hex(uintptr_t addr)
{
	char	*base;
	char	buf[20];
	int		i;
	int		count;

	base = "0123456789abcdef";
	i = 0;
	while (addr > 0)
	{
		buf[i] = base[addr % 16];
		addr = addr / 16;
		i++;
	}
	count = 0;
	while (i > 0)
	{
		i--;
		if (ft_putchar(buf[i]) == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	prefix_len;
	int	hex_len;

	if (ptr == NULL)
	{
		prefix_len = ft_putstr("0x0");
		return (prefix_len);
	}
	prefix_len = ft_putstr("0x");
	if (prefix_len == -1)
		return (-1);
	hex_len = print_ptr_hex((uintptr_t)ptr);
	if (hex_len == -1)
		return (-1);
	return (prefix_len + hex_len);
}
