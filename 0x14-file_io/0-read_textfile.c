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
	long int st;

	buf = malloc(sizeof(size_t) * (letters + 1));
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo < 0)
		return (0);

	if (read(fo, buf, letters) == -1)
		return (0);

	buf[letters] = '\0';
	while (buf[i] != '\0')
		i++;

	st = write(1, buf, i);
	if(st != i || st < 0)
		return (0);
	free(buf);
	return (st);
}
