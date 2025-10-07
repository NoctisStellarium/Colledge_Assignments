// Write a Program to Generate the Following Set of Output.
/*
                            1                   1
                           2 3                 1 1
                          4 5 6               1 2 1
                                             1 3 3 1
                                            1 4 6 4 1
*/

#include <stdio.h>

int Binomial_Coefficient(int row_x, int position_x) {   // This Block Calculate Binomial Coefficient C(n,k) = n!/k!(n-k)!
    int number_x = 1;                                   // For First Input C(0,0) = 1 (This Value Is Returned and Displayed As Output)

    if (position_x > row_x - position_x){
        position_x = row_x - position_x;
    }

    for (int i = 0; i < position_x; i++) {
        number_x = number_x * (row_x - i) / (i + 1);
    }
    return number_x;
}

int pascal_triangles(){

    int n2;
    int number2 = 1;

    printf("Please Enter The Number of Rows You Would Like To See : ");
    scanf("%d", &n2);

    for (int row2 = 1; row2 <= n2; row2++){

        for (int space2 = 1; space2 <= n2 - row2; space2++){
            printf(" ");
        }
        
        for (int position2 = 1; position2 <= row2; position2++){
            printf("%d ", Binomial_Coefficient(row2 - 1, position2 - 1));   // Factorial Function Knows Which Row & Which Column Is There To Assign It's Specific Value
            }
        printf("\n");
    }

    return 0; 
}

int main(){

    int n;
    int number = 1;

    printf("Please Enter The Number of Rows You Would Like To See : ");
    scanf("%d", &n);

        for (int row = 1; row <= n; row++){

        for (int space = 1; space <= n - row; space++){
            printf(" ");
        }    

        for (int position = 1; position <= row; position++){
            printf("%d ", number);   // Use %nd To Change Characters to Only Use n Spaces Width (Single Digits Takes 2 (1+1) Spaces, Double Digits Takes 3 (2+1) Spaces)
            number += 1;             // No Actual Purpose Just For Alignment Purposes Only
        }
        printf("\n");
    }

    char x;
    printf("Do You Wish to See Pascal's Triangle Pattern (Y/N): ");
    scanf("%s", &x);

    if (x == 'y' || x == 'Y') {
        pascal_triangles();
    }
    else {
        printf("The Program Has Ended Successfully");
    }

    return 0;
}