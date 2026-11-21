/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 06:02:42 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/21 06:02:43 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	total_printed;
	int	written;
	int	i;

	if (s == NULL)
		return (ft_putstr("(null)"));
	total_printed = 0;
	i = 0;
	while (s[i] != '\0')
	{
		written = ft_putchar(s[i]);
		if (written == -1)
			return (-1);
		total_printed += written;
		i++;
	}
	return (total_printed);
}
