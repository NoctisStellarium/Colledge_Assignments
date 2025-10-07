// Write a C Program to Check if Three points (x1, y1), (x2, y2) and (x3, y3) are Collinear or Not.

#include <stdio.h>
#include <math.h>

int main(){

    float x1, x2, x3;
    float y1, y2, y3;
    float mod, area;

    printf("Please Enter the First Set of Points : ");
    scanf("%f %f", &x1, &y1);

    printf("Please Enter the Second Set of Points : ");
    scanf("%f %f", &x2, &y2);

    printf("Please Enter the Third Set of Points : ");
    scanf("%f %f", &x3, &y3);

    mod = fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    area = 0.5 * mod;

    if (area == 0){

        printf("The Given Points Are Collinear \n");
    }
    else {

        printf("The Given Points Are Not Collinear \n");
    }

    return 0;
}