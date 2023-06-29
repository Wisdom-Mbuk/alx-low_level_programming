#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char* _strcat(char* dest, const char* src) {
    char* ptr = dest;

    while (*ptr != '\0') {
        ptr++;
    }

    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}

int main() {
    char dest[20] = "Hello, ";
    const char src[] = "world!";

    printf("Before concatenation: %s\n", dest);
    _strcat(dest, src);
    printf("After concatenation: %s\n", dest);

    return 0;
}
