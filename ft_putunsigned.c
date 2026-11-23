/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 18:47:50 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/23 15:11:15 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	count;
	int	ret;

	count = 0;
	if (n >= 10)
	{
		ret = ft_putunsigned(n / 10);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar((n % 10) + '0');
	if (ret < 0)
		return (-1);
	return (count + ret);
}
