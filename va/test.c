#include <stdarg.h>
#include <stdio.h>

int soma(int quantidade, ...)
{
	va_list args;
	int i;
	int resultado;

	resultado = 0;
	i = 0;

	va_start(args, quantidade);

	while (i < quantidade)
	{
		resultado += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (resultado);
}

int main(void)
{
	printf("%d\n", soma(4, 10, 20, 30, 40));

	/*va_list args;
	va_start(args, quantidade); 	// Inicializa o mecanismo de leitura.
	va_arg(args, int); 				//Obtém o próximo argumento.
	va_arg(args, char *);
	va_arg(args, double);
	va_end(args);	*/
	// Finaliza o acesso aos argumentos variáveis.

	return (0);
}
