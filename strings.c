#include "main.h"

int _puts(char *c)
{
    char *string_value;
    unsigned int count = 0;
    for (string_value = c; *string_value; string_value++)
        count += _putchar(*string_value);

    return count;
}

// function to find the length of string
int _string_length(char *string)
{

    int count = 0;

    // increment count until we reach the null charcter '\0'
    // null character marks the end of string
    while (string[count] != '\0')
    {
        ++count;
    }
    return count;
}

// function to reverse string
char *_string_reverse(char *string)
{

    char temp;
    int i, j, n;
    n = _string_length(string);

    // swapping string[i] and string[j] until i<j
    for (i = 0, j = n - 1; i < j; ++i, --j)
    {
        temp = string[j];
        string[j] = string[i];
        string[i] = temp;
    }
    return string;
}
