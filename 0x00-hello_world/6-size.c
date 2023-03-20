#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: zero on success
 *
 */
int main(void) {
    printf("Size of char: %d byte(s)\n", sizeof(char));
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of long int: %d byte(s)\n", sizeof(long int));
    printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
    printf("Size of float: %d byte(s)\n", sizeof(float));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of long double: %d byte(s)\n", sizeof(long double));
    return 0;
}

