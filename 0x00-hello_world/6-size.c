#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the size of various types'
 * Return: Always 0 (Success)
 */


int main() {
    printf("Size of a char : %lu octets\n", sizeof(char));
    printf("Size of an int : %lu octets\n", sizeof(int));
    printf("Size of a long int: %lu octets\n", sizeof(long));
    printf("Size of a long long int : %lu octets\n", sizeof(long long));
    printf("Size of float : %lu octets\n", sizeof(float));
    return 0;
}
