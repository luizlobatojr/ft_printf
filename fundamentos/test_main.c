#include "libft.h"

int	main(void)
{
	ft_print_numbers(4, 10, 20, 30, 40);
	ft_print_numbers(3, -42, 0, 7);
	ft_print_numbers(2, INT_MIN, INT_MAX);
	ft_print_numbers(0);

	printf("%d\n", ft_sum(4, 10, 20, 30, 40));

	printf("%d\n", ft_max(5, 10, 80, 25, 3, 40));      // Saída: 80
	printf("%d\n", ft_max(4, -15, -2, -90, -7));     // Saída: -2
	printf("%d\n", ft_max(1, 42));
	printf("\n");
	printf("%d\n", ft_min(5, 10, 80, 25, 3, 40));      
	printf("%d\n", ft_min(4, -15, -2, -90, -7));     
	printf("%d\n", ft_min(1, 42));
	printf("\n");
	printf("%.2f\n", ft_average(4, 10, 20, 30, 40)); // Saída: 25.00
	printf("%.2f\n", ft_average(3, 5, 2, 2));       // Saída: 3.00
	printf("%.2f\n", ft_average(2, 1, 2));          // Saída: 1.50
	printf("%.2f\n", ft_average(0));
	printf("\n");
	printf("%.2f\n", ft_sum_double(3, 1.5, 2.25, 3.25)); // Saída: 7.00
	printf("%.4f\n", ft_sum_double(4, 0.1, 0.2, -0.5, 1.2)); // Saída: 1.0000
	printf("%.2f\n", ft_sum_double(0));
	printf("\n");
	ft_print_strings(3, "42", "Libft", "C");
	ft_print_strings(2, "Porto", 0);
	ft_print_strings(0);
	printf("\n");
	printf("%d\n", ft_total_length(3, "Hello", "42", "C")); // Saída: 8
	printf("%d\n", ft_total_length(2, "", "abc"));         // Saída: 3
	printf("%d\n", ft_total_length(0));
	printf("\n");
	printf("%d\n", ft_count_empty(4, "", "42", "", "C")); // Saída: 2
	printf("%d\n", ft_count_empty(3, " ", "abc", "x"));   // Saída: 0
	printf("%d\n", ft_count_empty(0));
	printf("\n");
	printf("%d\n", ft_compare_strings(3, "42", "42", "42")); // Saída: 1
	printf("%d\n", ft_compare_strings(3, "42", "42", "24")); // Saída: 0
	printf("%d\n", ft_compare_strings(1, "solo"));           // Saída: 1
	printf("%d\n", ft_compare_strings(0));
	printf("\n");	
	printf("%d\n", ft_sum_positive(3, -1, 0, -99));         // Saída: 0
	printf("%d\n", ft_sum_positive(6, 10, -5, 20, -3, 8, 2)); // Saída: 40
	printf("%d\n", ft_sum_positive(0));
	return (0);
}
