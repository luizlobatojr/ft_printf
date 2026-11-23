/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 19:31:31 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/22 20:18:49 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int lower)
{
	if (lower == 'x')
	{
		return (ft_putbase(n, "0123456789abcdef", 16));
	}
	else 
	{
		return (ft_putbase(n, "0123456789ABCDEF", 16));
	}
}
