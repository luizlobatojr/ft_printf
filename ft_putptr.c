/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 11:51:00 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/23 13:42:59 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	len;
	int	ret;

	if (!p)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	if (len < 0)
		return (-1);
	ret = ft_putbase((unsigned long)p, "0123456789abcdef", 16);
	if(ret < 0)
		return (-1);
	return (len + ret);
}
