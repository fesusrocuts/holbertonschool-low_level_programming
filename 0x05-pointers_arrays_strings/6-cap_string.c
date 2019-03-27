#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */
char *cap_string(char *str)
{
	int i, c;
	int t;
	char arr[] = ",;.!?(){}\n\t\" ";

	for (i = 0, t = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			t = 1;
		for (c = 0; arr[c] != '\0'; c++)
		{
			if (arr[c] == str[i])
				t = 1;
		}
		if (t)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				t = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				t = 0;
			else if (str[i] > 47 && str[i] < 58)
				t = 0;
		}
	}
	return (str);
}
