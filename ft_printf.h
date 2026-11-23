/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubatist <lubatist@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 13:20:51 by lubatist          #+#    #+#             */
/*   Updated: 2026/11/23 15:04:51 by lubatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_printf(const char *input, ...);
int	ft_putunsigned(unsigned int n);
int	ft_putnbr(int n);
int	ft_putbase(unsigned long n, const char *base, unsigned long b);
int	ft_puthex(unsigned int n, int lower);
int	ft_putptr(void *p);

#endif
