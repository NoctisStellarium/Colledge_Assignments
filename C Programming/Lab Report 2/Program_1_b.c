// Write a C Program to Print the Address in Multiple Lines.

#include <stdio.h>
#include <string.h>   // To Used The Space Deletion Command Line Created By fgets At The End of Every User Input

int main(){

    char address1[50];
    char address2[50];
    char address3[50];

    printf("\nPlease Enter your First Line of Address : ");
    fgets(address1, sizeof(address1), stdin);   // fgets Is Used Because It Allows for Spaces to be Considered as Input
    address1[strcspn(address1, "\n")] = '\0';   // It Adds Space at Last by Default (This is to Remove that Extra Space)


    printf("Please Enter your Second Line of Address : ");
    fgets(address2, sizeof(address2), stdin);
    address2[strcspn(address2, "\n")] = '\0';

    printf("Please Enter your Third Line of Address : ");
    fgets(address3, sizeof(address3), stdin);
    address3[strcspn(address3, "\n")] = '\0';


    printf("\nYour Complete Address is as Follows : \n%s \n%s \n%s", address1, address2, address3);

    return 0;
}