#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _str_cnt(char *s);
size_t _fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int _fputc(int c, FILE *stream);
int _fputs(const char *s, FILE *stream);

#endif /* MAIN_H */
