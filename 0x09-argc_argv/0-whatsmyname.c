#include <stdio.h>
/**
 * main - entry program
 * @argc: length arguments command line
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
