#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void ft_putnbr(int n);
void ft_putchar(char c);
void ft_print_numbers(int count, ...);
int ft_sum(int count, ...);
int ft_max(int count, ...);
int ft_min(int count, ...);
double ft_average(int count, ...);
double ft_sum_double(int count, ...);
void ft_print_strings(int count, ...);
int ft_total_length(int count, ...);
int ft_count_empty(int count, ...);
int	ft_compare_strings(int count, ...);
int	ft_sum_positive(int count, ...);

#endif
