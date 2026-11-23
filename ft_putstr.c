/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:16:43 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/22 13:17:52 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t	i;

	if (!str)
	{
		str = "(null)";
	}
	i = 0;
	while (str[i])
	{
		i++;
	}
	return ((int)write(1, str, i));
}
