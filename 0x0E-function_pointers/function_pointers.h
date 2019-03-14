#ifndef _PRINT_NAME_H
#define _PRINT_NAME_H
void print_name(char *name, void (*f)(char *));
#endif

#ifndef _ARRAY_ITARATOR_H
#define _ARRAY_ITERATOR_H
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
