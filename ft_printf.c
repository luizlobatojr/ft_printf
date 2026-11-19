/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 06:53:39 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/19 07:25:03 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <limits.h>
#include <stdio.h>

/*int ft_printf(const char *format, ...)
{
	return (0);
}*/

int main(void)
{
	int ret;

	printf("--- 1. VALOR DE RETORNO ---\n");
	ret = printf("Ola 42!\n");
	printf("Bytes escritos: %d\n\n", ret);

	/*printf("--- 2. %%s COM NULL ---\n");
	ret = printf("String nula: [%s]\n", (char *)NULL);
	printf("Bytes escritos: %d\n\n", ret);*/

	printf("--- 3. %%p COM NULL ---\n");
	ret = printf("Ponteiro nulo: [%p]\n", NULL);
	printf("Bytes escritos: %d\n\n", ret);

	printf("--- 4. %%d COM INT_MIN ---\n");
	ret = printf("INT_MIN: [%d]\n", INT_MIN);
	printf("Bytes escritos: %d\n\n", ret);

	printf("--- 5. %%x COM 0 ---\n");
	ret = printf("Hex zero: [%x]\n", 0);
	printf("Bytes escritos: %d\n\n", ret);

	printf("--- 6. %%u COM NUMERO NEGATIVO ---\n");
	ret = printf("Unsigned -1: [%u]\n", -1);
	printf("Bytes escritos: %d\n\n", ret);

	/*
	printf("--- 7. %% NO FIM DA STRING ---\n");
	ret = printf("Percentagem sozinha: %");
	printf("\nBytes escritos: %d\n", ret);
	*/
	return (0);
}
