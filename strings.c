#include "main.h"

/**
 * _puts - print string of characters
 *
 * @c: - string of characters to be printed
 *
 * Return: number bytes of characters printed
 */
int _puts(char *c)
{
char *string_value;
unsigned int count = 0;
for (string_value = c; *string_value; string_value++)
count += _putchar(*string_value);
return (count);
}

/**
 * print_bigS - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @s: character string from _printf
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_bigS(char *s)
{
int i, count = 0;
char *res;

if (!s)
return (_puts("(null)"));

for (i = 0; s[i]; i++)
{
if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
{
_puts("\\x");
count += 2;
res = _convert(s[i], 16, 0);
if (!res[1])
count += _putchar('0');
count += _puts(res);
}
else
count += _putchar(s[i]);
}

return (count);
}

/**
 * print_rev - prints a string in reverse
 * @s: character string from _printf
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rev(char *s)
{
int i = 0, j;

if (!s)
s = "(null)";

while (s[i])
i++;

for (j = i - 1; j >= 0; j--)
_putchar(s[j]);

return (i);
}

/**
 * print_rot13 - prints a string using rot13
 * @s: character string from _printf
 * Return: length of the printed string
 */
int print_rot13(char *s)
{
int i, j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (j = 0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);
else
{
for (i = 0; i <= 52; i++)
{
if (s[j] == rot13[i])
_putchar(ROT13[i]);
}
}
}

return (j);
}

/**
 * print_custom_inv - combines string conversions
 * @s: character string from _printf
 * @inversion: inversion from _printf
 * Return: length of the printed string
 */
int print_custom_inv(char *s, char inversion)
{
int count = 0;
switch (inversion)
{
case 's':
count += _puts(s);
break;
case 'r':
count += print_rev(s);
break;
case 'S':
count += print_bigS(s);
break;
case 'R':
count += print_rot13(s);
break;
default:
count += _putchar(*s);
}

return (count);
}
