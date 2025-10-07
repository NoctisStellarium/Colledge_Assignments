// The Population of a Town is 100,000. The Population has Increased Steadily at the Rate of 10% Per Year for the Last 10 Years. Write a Program to Determine the Population at the End of Each Year in the Last Decade.

#include <stdio.h>

int main(){

    float population;
    int year;
    float rate;

    printf("Please Enter The Population of The Town : ");
    scanf("%f", &population);

    printf("Enter Number of Years : ");
    scanf("%d", &year);

    printf("Please Enter the Percent Increment Per Year In Population : ");
    scanf("%f", &rate);

    rate = rate / 100;

    for (int i = 1; i <= year; i++){

        population = rate * population + population;
        printf("\nPopulation of Town After %d Years is : %.0f", i, population);
    }
    
    return 0;
}