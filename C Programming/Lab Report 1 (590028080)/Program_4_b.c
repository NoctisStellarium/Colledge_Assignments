// Write a C Program to Print the Multiplication Table of a Number Entered by the User.

#include <stdio.h>

int main(){

    int number, number2;
    int bigger;
    
    printf("Please Enter the Number to Display The Multiplication Table : ");
    scanf("%d", &number);

    printf("Please Enter Where To End The Multiplication Table : ");
    scanf("%d", &bigger);

    printf("Multiplication Table of %d", number);

    for (int i = 1; i <= bigger; i++){

        number2 = i * number;
        printf("\n%d * %d = %d", number, i, number2);
      
    }

    return 0;
}