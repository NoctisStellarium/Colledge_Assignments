// Write a C program to Convert Temperature From Celsius to Fahrenheit.

#include <stdio.h>

int main(){

    float celsius;
    float fahrenheit;

    printf("Please Enter the Temperature in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("The Temperature in Fahrenheit is : %.3f ", fahrenheit);

    return 0;
}