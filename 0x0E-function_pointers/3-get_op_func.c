#include <stdio.h>
#include "3-calc.h"
/**
* get_op_func - load opertation of the calc
* @s: operator passed as argument
* Return: pointer with the function indicate in arg 's'
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(opt[i].op, s) == 0)
			return (opt[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
