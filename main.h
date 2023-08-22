#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *s);
int print_num(int);
int spec(char, char, va_list);
int print_bin(unsigned int);
#endif
