#include "holberton.h"
/**
 * *_strcpy - copies the string pointed
 * @dest: get pointer
 * @src: get pointer
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
