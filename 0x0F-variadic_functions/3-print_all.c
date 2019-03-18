#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @separator:  value
 * @n: integer value
 * @...: void
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str = NULL;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
		{
			printf("\n");
			va_end(args);
			return;
		}
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
