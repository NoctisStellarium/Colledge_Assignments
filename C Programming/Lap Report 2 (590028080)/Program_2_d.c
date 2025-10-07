// Write a C Program To Use The Function ISPRIME (num1) that Accepts an Integer Argument and Returns 1 if the Argument is Prime, 0 Otherwise. Use This Function to Generate Prime Numbers Between the Given Ranges. 

#include <stdio.h>

int ISPRIME(int num1) {
    if (num1 <= 1) 
    return 0;
    for (int i = 2; i * i <= num1; i++) {
        if (num1 % i == 0) {
            return 0; // Not a Prime Number
        }
    }
    return 1; // Prime Number
}

int main() {
    int lower, upper;

    printf("Enter Two Integers (Lower and Upper Range): "); // Input Range from User
    scanf("%d %d", &lower, &upper);

    printf("Prime Numbers Between %d and %d Are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (ISPRIME(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}