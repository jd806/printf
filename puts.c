#include "main.h"

int _puts(char *c)
{
    char *string_value;
    unsigned int count = 0;
    for (string_value = c; *string_value; string_value++)
        count += _putchar(*string_value);

    return count;
}
