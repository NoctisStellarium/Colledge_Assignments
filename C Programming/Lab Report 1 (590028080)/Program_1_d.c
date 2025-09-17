// Write a C Program That Prompts The User to Add Two Numbers.

#include <stdio.h>

int main(){

    int num1;
    int num2;
    int sum;

    printf("Please Enter Your First Number : ");
    scanf("%d", &num1);

    printf("Please Enter Your Second Number : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The Addition of %d and %d is : %d ", num1, num2, sum);

    return 0;
}