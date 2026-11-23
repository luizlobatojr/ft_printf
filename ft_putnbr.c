/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:23:41 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/23 15:13:31 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_digits(long nb)
{
	int	count;
	int	ret;

	count = 0;
	if (nb >= 10)
	{
		ret = ft_put_digits(nb / 10);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar((nb % 10) + '0');
	if (ret < 0)
		return (-1);
	return (count + ret);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		count;
	int		ret;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		ret = ft_putchar('-');
		if (ret < 0)
			return (-1);
		count += ret;
		nb = -nb;
	}
	ret = ft_put_digits(nb);
	if (ret < 0)
		return (-1);
	return (count + ret);
}
