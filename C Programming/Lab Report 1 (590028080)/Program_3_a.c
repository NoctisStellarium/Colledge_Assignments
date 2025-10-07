// Write a C Program to Check if The Triangle is Valid or Not. If the Validity is Established, Do Check if The Triangle is Scalene, Isosceles, Equilateral or Right-Angled Triangle.

#include <stdio.h>
#include <math.h>

#define alpha 0.0001

int main(){

    float side1, side2, side3, side4, side5, side6, side7;

    printf("Please Enter the First Side of the Traingle : ");
    scanf("%f", &side1);    
    
    printf("Please Enter the Second Side of the Traingle : ");
    scanf("%f", &side2);

    printf("Please Enter the Third Side of the Traingle : ");
    scanf("%f", &side3);

    if (side1 >= side2 && side1 >= side3){
        side4 = side1;
        side5 = side2;
        side6 = side3;
    }
    else if (side2 >= side1 && side2 >= side3){
        side4 = side2;
        side5 = side1;
        side6 = side3;
    }
    else {
        side4 = side3;
        side5 = side1;
        side6 = side2;
    }

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2){
        printf("This Triangle is Valid \n");

        if (side1 == side2 && side2 == side3){
            printf("The Given Triangle is Equilateral \n");
        }
        else if (fabs((side4*side4) - (side5*side5 + side6*side6)) < alpha){   // fabs Returns the Absolute Value (This Optimization Helps With Decimal Value Triangle Sides)
            printf("The Triangle is Right-Angled \n");   // This Optimization Helps With Right-Angled Statement to Pass With Better Precision and Accuracy

            if (side1 == side2 || side2 == side3 || side1 == side3){
            printf("The Given Triangle is Isosceles \n");
            }
            else if (side1 != side2 && side2 != side3 && side1 != side3) {
            printf("The Given Traingle is Scalene \n");
            }
        }
        else {
            printf("The Triangle is Not Right-Angled \n");
            
            if (side1 == side2 || side2 == side3 || side1 == side3){
                printf("The Given Triangle is Isosceles \n");
            }
            else if (side1 != side2 && side2 != side3 && side1 != side3) {
                printf("The Given Traingle is Scalene \n");
            }
        }
    }
    else {
        printf("This Triangle is Not Valid \n");
    }
    
    return 0;
}