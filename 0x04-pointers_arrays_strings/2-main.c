#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    
    str = "Lorem ipsum...";
    len = _strlen(str);
    printf("%d\n", len);
    
    str = "";
    len = _strlen(str);
    printf("%d\n", len);
    
    str = "SELECT statuses.word_id FROM lang1_words, statuses WHERE statuses.word_id = lang1_words.word_id ORDER BY lang1_words.word ASC";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
