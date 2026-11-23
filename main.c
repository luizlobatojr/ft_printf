/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:05:12 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/23 15:05:13 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int		ret_ft;
	int		ret_std;
	char	*ptr;

	ptr = "PTR";
	printf("----------FT_PRINTF----------\n");
	fflush(stdout);
	ret_ft = ft_printf("Ptr: %p | Char: %c | Str: %s | Id: %d | Ii: %i | Iu: %u | Hx: %x | HX: %X\n",
			&ptr, 'A', "42 Porto", 8, 3, 42u, 255, 255);
	printf("----------PRINTF-------------\n");
	fflush(stdout);
	ret_std = printf("Ptr: %p | Char: %c | Str: %s | Id: %d | Ii: %i | Iu: %u | Hx: %x | HX: %X\n",
			&ptr, 'A', "42 Porto", 8, 3, 42u, 255, 255);
	ft_printf("Retorno ft_printf: %d | printf: %d\n", ret_ft, ret_std);
	return (0);
}
