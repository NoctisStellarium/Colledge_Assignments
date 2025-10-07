// Write a C program to Calculate the Area and Perimeter of a Rectangle Based on its Length and Breadth.

#include <stdio.h>

int main(){

    float length;
    float breadth;
    float area;
    float perimeter;

    printf("Please Enter the Length of the Rectangle : ");
    scanf("%f", &length);

    printf("Please Enter the Breadth of the Rectangle : ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);
    area = length * breadth;

    printf("The Perimeter of the Given Rectangle is : %.3f \n", perimeter);
    printf("The Area of The Given Rectangle : %.3f ", area);


    return 0;
}