// Write a C Program to Apply Left Shift and Right Shift Operator.

#include <stdio.h>

int main() {
    int num, leftShift, rightShift, shiftBy;

    // Input a Number and The Number of Positions to Shift
    printf("Enter an Integer: ");
    scanf("%d", &num);
    printf("Enter Number of Positions to Shift: ");
    scanf("%d", &shiftBy);

    // Apply Left Shift and Right Shift Operators
    leftShift = num << shiftBy;
    rightShift = num >> shiftBy;

    // Display the Results
    printf("Original Number: %d\n", num);
    printf("Left Shift by %d positions: %d\n", shiftBy, leftShift);
    printf("Right Shift by %d positions: %d\n", shiftBy, rightShift);

    return 0;
}