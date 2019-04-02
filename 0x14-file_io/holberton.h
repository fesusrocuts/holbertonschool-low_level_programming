#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/* Standard file descriptors.  */
/*#define STDIN_FILENO    0*//* Standard input.*/
/*#define STDOUT_FILENO   1*//* Standard output.*/
/*#define STDERR_FILENO   2*//* Standard error output.*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
