// Declare Variables Within Different Code Blocks (Enclosed by Curly Braces) and Test Their Accessibility Within and Outside Those Blocks.

#include <stdio.h>

int main(){

    {
        int num1;
        printf("Enter The First Number : ");
        scanf("%d", &num1);

        printf("The Displayed Variable (Inside Code Block) Is : %d \n", num1);
    }

    /*
    
    printf("The Displayed Variable (Outside Code Block) Is : %d \n", num1);   // If We Try To Access num1 Outside The Code Block
    It Gives an Error Saying Identifier "num1" Is Undefined.

    */
   
    return 0;
}