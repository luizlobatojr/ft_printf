/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 06:02:46 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/21 06:02:47 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char	box[16];
	int		pos;
	int		total;

	if (n == 0)
		return (ft_putchar('0'));
	pos = 0;
	while (n > 0)
	{
		box[pos] = (n % 10) + '0';
		n = n / 10;
		pos++;
	}
	total = 0;
	while (pos > 0)
	{
		pos--;
		if (ft_putchar(box[pos]) == -1)
			return (-1);
		total++;
	}
	return (total);
}
