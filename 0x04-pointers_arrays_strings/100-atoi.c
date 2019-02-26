#include "holberton.h"
/**
 *  _atoi- return integer of the string
 * @s: get string
 * Return: integer
 */
int _atoi(char *s)
{
	int iterator = 0;
	int result = 0;
	int c;
	int countInt = 0;
	int countNegative = 0;
	int isNegative = 0;

	while (s[iterator])
	{
		c = s[iterator] - '0';
		if (c == -3 && result == 0)
		{
			countNegative++;
			if (countNegative > 1)
				isNegative = 1;
			else if (countNegative == 1 && iterator == 0)
				isNegative = 1;
		}
		else if (c >= 0 && c <= 9)
		{
			countInt++;
			if (isNegative == 1)
				result =  result < 0 ? result * 10 - c : result - c;
			else
				result =  result > 0 ? result * 10 + c : result + c;
		}
		else if (countInt > 0)
		{
			iterator = -2;
		}
		else
		{
			isNegative = 0;
			countNegative = 0;
		}
		iterator++;
	}
	return (result);
}
