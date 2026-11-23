/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 19:41:14 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/22 19:51:13 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putbase(unsigned long n, const char *base, unsigned long b)
{
	int	len;
	int	ret;

	len = 0;
	if (n >= b)
	{
		ret = ft_putbase(n / b, base, b);
		if (ret < 0)
			return (-1);
		len += ret;
	}
	ret = ft_putchar(base[n % b]);
	if (ret < 0)
		return (-1);
	return (len + ret);
}
