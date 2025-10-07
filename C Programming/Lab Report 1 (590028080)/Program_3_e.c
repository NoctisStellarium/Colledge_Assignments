// Write a Program using Ternary Operator, Where The User Should Input the Length and Breadth of a Rectangle, One has to Find out Which rectangle has the Highest Perimeter (The Minimum Number of Rectangles Should be Three).

#include <stdio.h>

int main() {

    int number;

    printf("Please Enter the Number of Rectangles You Want to Compare (Minimum 3): ");
    scanf("%d", &number);

    if (number < 3) {

        printf("You Must Compare At Least 3 Rectangles.\n");
        return 0;
    }

    float length, breadth, perimeter;
    float maxPerimeter = 0;

    for (int i = 1; i <= number; i++) {

        printf("\nRectangle %d:\n", i);

        printf("Enter the Length Of The Rectangle : ");
        scanf("%f", &length);

        printf("Enter the Breadth Of The Rectangle: ");
        scanf("%f", &breadth);

        perimeter = 2 * (length + breadth);

        maxPerimeter = (perimeter > maxPerimeter) ? perimeter : maxPerimeter;   // Using Ternary Operator (Statement ? True : False) to Update The Values.
    }

    printf("The Largest Perimeter After Comparing All The Rectangles is: %.3f\n", maxPerimeter);

    return 0;
}