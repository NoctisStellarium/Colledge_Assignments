// Write a C Program To Use a Recursive Function GCD (num1, num2) That Accepts Two Integer Arguments. Use This Function to Find the Greatest Common Divisor of Two Given Integers. 

#include <stdio.h>

int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return GCD(num2, num1 % num2);
}

int main() {
    int num1, num2;
    
    printf("Enter Two Integers: ");
    scanf("%d %d", &num1, &num2);
    
    int result = GCD(num1, num2);
    printf("The Greatest Common Divisor of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}