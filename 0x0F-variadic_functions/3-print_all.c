#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format:  string
 * @...: args
 * Return: void
 */

/*void va_arg_din(char *_type, va_list *args);*/
int (*valformat(char))();
int pt_c(char *separator, char *data);
int pt_i(char *separator, char *data);
int pt_f(char *separator, char *data);
int pt_s(char *separator, char *data);
int pt_error(char *separator, char *data);

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	/*char *str = NULL;*/
	int l = strlen(format);
	char *separator = ", ";
		
	va_start(args, format);
	while(i < l)
	{
		if(i == l - 1)
			separator = "";
		/*
		if((*valformat(format[i]))(separator, "test") == 0)
		{
		}
		*/
		if((*valformat(format[i]))(separator, va_arg(args, char *)) == 0)
		{
		}

		/*strcpy(_ta,"%d");*/
		/*if(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{*/
			/*if(format[i] == 's')
			{*/
				/*str = va_arg(args, char  *);
				
				printf(_ta, str);
				if(str == NULL)
				{
					printf("(nil)");
					break;
				}*/
			/*}*/
		/*}*/
		i++;
	}
	va_end(args);
	printf("\n");
	
	/*

			

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
	*/
}

int (*valformat(char c))(char *, char *)
{
	int i = 0;
	typedef struct st
	{
		char st;
		int (*f)(char *, char *);
	} st_t;
	st_t sts[] = {
		{'c', pt_c},
		{'i', pt_i},
		{'f', pt_f},
		{'s', pt_s},
		{'z', pt_error}
	};
	
	printf("\nBuscar: %c\n", c);
	while(i < 5)
	{
		if(sts[i].st == c)
		{
			return (sts[i].f);
		}
		i++;
	}
	return (sts[i - 1].f);

}
int pt_c(char *separator, char *data)
{
	printf("imprimir char\n");
	printf("%c", data[0]);
	printf("%s", separator);
	return (0);
}
int pt_i(char *separator, char *data)
{
	printf("imprimir entero\n");
	printf("%s", data);
	printf("%s", separator);
	return (0);
}
int pt_f(char *separator, char *data)
{
	printf("imprimir float\n");
	printf("%s", data);
	printf("%s", separator);
	return (0);
}
int pt_s(char *separator, char *data)
{
	printf("imprimir cadena\n");
	printf("%s", data);
	printf("%s", separator);
	return (0);
}
int pt_error(char *separator, char *data)
{
	printf("Error\n");
	printf("%s", data);
	printf("%s", separator);
	return (0);
}
