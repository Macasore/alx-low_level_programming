#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, status_check;
	va_list ap;
	char *s;
	va_start(ap, format);

	while (format && format[i])
	{
		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				status_check = 0;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				status_check = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				status_check = 0;
				break;
			case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
				status_check = 0;
				break;
			}
			printf("%s", s);
			status_check = 0;
			break;
			default:
				status_check = 1;
				break;
		}
		if (status_check == 0 && *(format + i + 1) != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);

}
