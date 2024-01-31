#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
unsigned int _strlen(char *str);
void c_handler(char c, int *len);
void s_handler(char *str, int *len);
void i_handler(int num, int *len);
int power(int base, int exponent);

#endif
