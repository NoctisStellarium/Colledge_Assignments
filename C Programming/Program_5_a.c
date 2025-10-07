// Declare a Global Variable Outside All Functions and Use it Inside Various Functions to Understand its Accessibility.

#include <stdio.h>

int global = 10;

int global_function(){

    printf("Global Variable (Inside The Function): %d \n", global);
    return 0;
}

int main(){

    printf("The Global Variable Is : %d \n", global);   // Original Value of Global Initialized Outside All Functions
    
    int global;

    printf("Enter The Number To Shadow The Global Variable : ");
    scanf("%d", &global);
    
    printf("The Local Variable Is : %d \n", global);   // Shadowing OF The Variable "Global"

    global_function();   // Calling This Function To Print The Original Value After Shadowing of The Variable "Global"

    return 0;
}