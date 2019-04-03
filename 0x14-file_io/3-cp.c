#include "holberton.h"
/**
 * main - copies the content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int op, op2, cl, cl2, rc, wc;
	char buf[BS];

	if (ac != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	op = open(av[1], O_RDONLY);
	if (op < 0)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	op2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (op2 < 0)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	if (buf != NULL)
	{
		do {
			rc = read(op, buf, BS);
			if (rc == -1)
			{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
				exit(98); }
			if (rc > 0)
			{
				wc = write(op2, buf, rc);
				if (wc == -1)
				{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
					exit(99); }
			}
		} while (rc == BS && wc > 0);
	}
	cl = close(op);
	if (cl == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100); }
	cl2 = close(op2);
	if (cl2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100); }
	return (0);
}
