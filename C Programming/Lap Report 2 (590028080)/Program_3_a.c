// Write a C Program to Apply Bitwise OR, AND & NOT operators on Bit Level.

#include <stdio.h>

int main() {

    unsigned char a, b, result;

    printf("Enter First Number (0-255): ");
    scanf("%hhu", &a);
    printf("Enter Second Number (0-255): ");
    scanf("%hhu", &b);

    // Bitwise AND
    result = a & b;
    printf("Bitwise AND of %u and %u is: %u\n", a, b, result);

    // Bitwise OR
    result = a | b;
    printf("Bitwise OR of %u and %u is: %u\n", a, b, result);

    // Bitwise NOT
    result = ~a;
    printf("Bitwise NOT of %u is: %u\n", a, result);
    result = ~b;
    printf("Bitwise NOT of %u is: %u\n", b, result);

    return 0;
}