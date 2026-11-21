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
#include <limits.h>
#include <stdio.h>
#include <stdint.h>

static void	test_text(void)
{
	int	ft_result;
	int	printf_result;

	printf("Texto e caracteres:\n");
	fflush(stdout);
	ft_result = ft_printf("[%c] [%s] [%%]\n", 'A', "teste");
	printf_result = printf("[%c] [%s] [%%]\n", 'A', "teste");
	printf("Retornos: ft_printf=%d, printf=%d\n\n", ft_result, printf_result);
}

static void	test_numbers(void)
{
	int	ft_result;
	int	printf_result;

	printf("Numeros decimais:\n");
	fflush(stdout);
	ft_result = ft_printf("[%d] [%i] [%u]\n", INT_MIN, INT_MAX, UINT_MAX);
	printf_result = printf("[%d] [%i] [%u]\n", INT_MIN, INT_MAX, UINT_MAX);
	printf("Retornos: ft_printf=%d, printf=%d\n\n", ft_result, printf_result);
}

static void	test_hex_and_pointer(void)
{
	int			value;
	int			ft_result;
	int			printf_result;
	void		*null_pointer;

	value = 42;
	null_pointer = NULL;
	printf("Hexadecimal e ponteiros:\n");
	fflush(stdout);
	ft_result = ft_printf("[%x] [%X] [%p] [%p]\n", value, value,
			&value, null_pointer);
	printf_result = printf("[%x] [%X] [%p] [%p]\n", value, value,
			&value, null_pointer);
	printf("Retornos: ft_printf=%d, printf=%d\n\n", ft_result, printf_result);
}

int	main(void)
{
	test_text();
	test_numbers();
	test_hex_and_pointer();
	return (0);
}
