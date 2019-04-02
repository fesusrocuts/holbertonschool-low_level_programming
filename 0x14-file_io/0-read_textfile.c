#include "holberton.h"
/**
* read_textfile - reads a text file and prints it to the POSIX stdout
* @filename: path file
* @letters: size buf
* Return: length char of file that was readed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	long int i = 0;
	int fo;
	char *buf;
	int st;

	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo < 0)
		return (0);

	read(fo, buf, letters);
	buf[letters] = '\0';

	while (buf[i] != '\0')
	{
		/*putchar(buf[i]);*/
		i++;
	}
	st = write(STDIN_FILENO, buf, i);
	free(buf);
	if (st != i)
		return (0);
	return (i);
}
