#ifndef __MAIN_H
#define __MAIN_H

#include <stdlib.h>
#include<stdarg.h>

int _putchar(char c);
int _puts(char *c);
int _printf(const char *format, ...);
char *_convert(unsigned int num, int base, int lowercase);
/** Number Inversion**/
int print_number_inv(int integer_value, char inversion);
int print_int(int integer_value);

/** Custom Inversion */
int print_custom_inv(char *s, char inversion);
int print_rev(char *s);
int print_rot13(char *s);
int print_bigS(char *s);
#endif /* __MAIN_H */
