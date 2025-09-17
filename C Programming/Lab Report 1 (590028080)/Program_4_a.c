// Write a C Program to Enter Numbers till the User Wants. At the End, it Should Display the Count of Positive, Negative, and Zeroes Entered.

#include <stdio.h>

int main(){

    int number, value;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    do {

        printf("Please Enter the Number : ");
        scanf("%d", &value);

        if (value > 0){
            positive += 1;
        }
        else if (value < 0){
            negative += 1;
        }
        else {
            zero += 1;
        }

        printf("Do You Want to Continue This Process : ");
        scanf("%d", &number);
    }
    while(number);

    printf("The Number of Postive, Negative and Zeroes Entered Are : %d, %d, %d", positive, negative, zero);

    return 0;
}