#include "holberton.h"
/**
 * rev_string - return reverse string
 * @s: get string
 * Return: void
 */
void rev_string(char *s)
{
	int left = 0;
	int right = 0;
	int length = 0;
	char tmp;

	while (s[length] != '\0')
		length++;
	right = length - 1;
	while (left < right)
	{
		tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}
}
