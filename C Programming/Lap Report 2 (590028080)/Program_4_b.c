// Write a C Program to Perform Pointer Arithmetic (Increment and Decrement) on Pointers of Different Data Types. Observe How the Memory Addresses Change and The Effects on Data Access.

#include <stdio.h>

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[] = {'A', 'B', 'C', 'D', 'E'};

    int *intPtr = intArr;
    float *floatPtr = floatArr;
    char *charPtr = charArr;

    printf("Pointer Arithmetic on Integer Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %d\n", (void*)intPtr, *intPtr);
        intPtr++; // Increment Pointer
    }

    printf("\nPointer Arithmetic on Float Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %.1f\n", (void*)floatPtr, *floatPtr);
        floatPtr++; // Increment Pointer
    }

    printf("\nPointer Arithmetic on Char Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %c\n", (void*)charPtr, *charPtr);
        charPtr++; // Increment Pointer
    }

    // Decrementing Pointers
    intPtr--; // Move Back to Last Element of intArr
    floatPtr--; // Move Back to Last Element of floatArr
    charPtr--; // Move Back to Last Element of charArr

    printf("\nDecrementing Pointers:\n");
    printf("Integer Pointer Address: %p, Value: %d\n", (void*)intPtr, *intPtr);
    printf("Float Pointer Address: %p, Value: %.1f\n", (void*)floatPtr, *floatPtr);
    printf("Char Pointer Address: %p, Value: %c\n", (void*)charPtr, *charPtr);

    return 0;
}