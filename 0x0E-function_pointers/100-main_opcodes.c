#include <stdio.h>
#include <strlib.h>
/**
* main - entry function
* @argc: length args
* @argv: pointer of pointer
* Return: integer
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
