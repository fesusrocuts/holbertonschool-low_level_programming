#include <stdio.h>
#ifndef __putchar_h
#define __putchar_h
int _putchar(char c); 
#endif
#ifndef _print_alphabet_h
#define _print_alphabet_h
void print_alphabet(void);
#endif
#ifndef _print_alphabet_x10_h
#define _print_alphabet_x10_h
void print_alphabet_x10(void);
#endif

#ifndef _islower_h
#define _islower_h
int _islower(int c);
#endif

#ifndef _isalpha_h
#define _isalpha_h
int _isalpha(int c);
#endif

#ifndef _print_sign_h
#define _print_sign_h
int print_sign(int n);
#endif

#ifndef __abs_h
#define __abs_h
int _abs(int);
#endif

#ifndef _print_last_digit_h
#define _print_last_digit_h
int print_last_digit(int);
#endif

#ifndef _jack_bauer_h
#define _jack_bauer_h
void jack_bauer(void);
#endif


#ifndef _add_h
#define _add_h
int add(int, int);
#endif

#ifndef _print_to_98_h
#define _print_to_98_h
void print_to_98(int n);
#endif

#ifndef __isupper_h
#define __isupper_h
int _isupper(int c);
#endif

#ifndef __isdigit_h
#define __isdigit_h
int _isdigit(int c);
#endif

#ifndef _mul_h
#define _mul_h
int mul(int a, int b);
#endif

#ifndef _print_numbers_h
#define _print_numbers_h
void print_numbers(void);
#endif

#ifndef _print_most_numbers_h
#define _print_most_numbers_h
void print_most_numbers(void);
#endif

#ifndef _more_numbers_h
#define _more_numbers_h
void more_numbers(void);
#endif

#ifndef _print_line_h
#define _print_line_h
void print_line(int n);
#endif

#ifndef _print_diagonal_h
#define _print_diagonal_h
void print_diagonal(int n);
#endif

#ifndef _print_square_h
#define _print_square_h
void print_square(int size);
#endif

#ifndef _print_triangle_h
#define _print_triangle_h
void print_triangle(int size);
#endif

#ifndef _print_number_h
#define _print_number_h
void print_number(int n);
#endif

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);



/*0x0B-more_malloc_free*/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

