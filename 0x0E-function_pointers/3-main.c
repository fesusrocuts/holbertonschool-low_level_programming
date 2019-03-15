#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
* main - entry calc
* @argc: number of argv
* @argv: array with pointers
* Return: integer 0 if not exist error
*/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	/*if (atoi(argv[3]) == 0 && ((int)argv[2] == (int)'/' || (int)argv[2] == (int)'%'))
	{
		printf("Error\n");
		exit(100);
	}*/

	(*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	return (0);
}
