#include "holberton.h"
/**
* create_file - creates a file
* @filename: path file
* @text_content: pointer char
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	long int i = 0;
	int fo;
	long int st = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fo < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		st = write(fo, text_content, i);
		if (st != i || st < 0)
		{
			return (-1);
		}
	}
	if (close(fo) > 0)
	{
		return (-1);
	}
	return (1);
}
