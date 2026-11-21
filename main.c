/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 06:03:04 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/21 06:03:05 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = ft_printf("Nome: %s | Idade: %d\n", "Luiz", 25);
	b = printf("Nome: %s | Idade: %d\n", "Luiz", 25);
	printf("Retornos: %d | %d\n", a, b);
	return (0);
}
