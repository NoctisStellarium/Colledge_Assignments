// Write a C program that Determines the Day of The Week for January 1st of any Given Year, Based on the Fact that January 1st, 0001 was a Monday According to the Gregorian Calendar.

#include <stdio.h>

int main(){

    int year;
    int total_days = 0;
    int week;

    printf("Please Enter the Year : ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++){
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
            total_days += 366;
        }
        else {
            total_days += 365;
        }
    }
    week = total_days % 7;

    switch (week){
        case 0:
            printf("The Day of The Week for January 1st %d is : Monday ", year);
            break;
        case 1:
            printf("The Day of The Week for January 1st %d is : Tuesday ", year);
            break;
        case 2:
            printf("The Day of The Week for January 1st %d is : Wednesday ", year);
            break;
        case 3:
            printf("The Day of The Week for January 1st %d is : Thrusday ", year);
            break;
        case 4:
            printf("The Day of The Week for January 1st %d is : Friday ", year);
            break;
        case 5:
            printf("The Day of The Week for January 1st %d is : Saturday", year);
            break;
        case 6:
            printf("The Day of The Week for January 1st %d is : Sunday", year);
            break;      
    }

    return 0;
}