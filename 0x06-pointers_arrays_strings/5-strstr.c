#include "holberton.h"
/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * @haystack: string
 * @needle: string
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
  int i, j, m, si, ncz;

  i = 0, j = 0, m = 0, si = 0, ncz = 0;
  while (needle[ncz] != '\0')
    ncz++;
  while (needle[i] != '\0')
  {
    while (haystack[j] != '\0')
    {
      if (needle[i] == haystack[j])
      {
        m += 1;
        if (i == 0)
        {
          si = j;
        }
      }
      j++;
    }
    j = si + 1;
    i++;
  }
  if (m == ncz)
  {
    return &(haystack[si]);
  }
  return ('\0');
}
