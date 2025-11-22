#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);

int _putchar(char c);
int _write_buf(const char *buf, int len);

int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(void);
int print_int(va_list ap);

#endif 
