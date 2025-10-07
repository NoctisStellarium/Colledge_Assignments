// Write a C Program to Declare Different Types of Pointers (int, float, char) and Initialize Them with The Addresses of Variables. Print the Values of Both the Pointers and the Variables They Point To.

#include <stdio.h>

int main() {
    int intVar = 42;
    float floatVar = 3.14f;
    char charVar = 'A';

    int *intPtr = &intVar;
    float *floatPtr = &floatVar;
    char *charPtr = &charVar;

    printf("Integer Variable: %d \nPointer Value: %p \nValue Pointed to: %d\n", intVar, (void*)intPtr, *intPtr);
    printf("\n");
    printf("Float Variable: %.2f \nPointer Value: %p \nValue Pointed to: %.2f\n", floatVar, (void*)floatPtr, *floatPtr);
    printf("\n");
    printf("Character Variable: %c \nPointer Value: %p \nValue Pointed to: %c\n", charVar, (void*)charPtr, *charPtr);

    return 0;
}