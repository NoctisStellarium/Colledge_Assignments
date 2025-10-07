// Write a C Program To Use a Recursive Function FIBO (num1) That Accepts an Integer Argument. Use This Function to Generate the Fibonacci Sequence.

#include <stdio.h>

int FIBO(int num1)
{
    if (num1 == 0)
        return 0;
    else if (num1 == 1)
        return 1;
    else
        return FIBO(num1 - 1) + FIBO(num1 - 2);
}

int main()
{
    int num1, i = 0, result;

    printf("Enter the Number of Terms for Fibonacci Sequence: ");
    scanf("%d", &num1);

    printf("Fibonacci Sequence:\n");
    while (i < num1)
    {
        result = FIBO(i);
        printf("%d ", result);
        i++;
    }
    printf("\n");

    return 0;
}