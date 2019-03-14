#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - print name through dinamic function
* @name: string value
* @f: funtion that work
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *f != NULL)
		(*f)(name);
	else
		return;
}
