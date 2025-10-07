// Declare a Local Variable Inside a Function and Try to Access it Outside the Function. Compare This with Accessing the Global variable from Within the Function.

#include <stdio.h>

int global = 10;

int local_function(){

    int local;

    printf("Enter The Local Variable : ");
    scanf("%d", &local);

    printf("The Local Variable Is : %d \n", local);   

    return local;
}

int main(){

    printf("The Global Variable Is : %d \n", global);

    local_function();
    
    /*

    printf("The Local Variable Is : %d \n", local);   // If We Try To Access Local Variable Declare Outside Main()
    It Gives an Error Saying Identifier "local" Is Undefined.

    */
   
    return 0;
}