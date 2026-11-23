#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret_ft;
	int	ret_std;
	char	*ptr = "PTR";
	
	printf("----------FT_PRINTF----------\n");
	ret_ft = ft_printf("Ptr: %p | Char: %c | Str: %s | Id: %d | Ii: %i | Iu: %u | Hx: %x | HX: %X \n", &ptr, 'A', "42 Porto", 8, 3, -42, 255, 255);
	printf("----------PRINTF-------------\n");
	ret_std = printf("Ptr: %p | Char: %c | Str: %s | Id: %d | Ii: %i | Iu: %u | Hx: %x | HX: %X \n", &ptr, 'A', "42 Porto", 8, 3, -42, 255, 255);

	ft_printf("Retorno ft_printf: %d | printf: %d\n", ret_ft, ret_std);
	return (0);
}
