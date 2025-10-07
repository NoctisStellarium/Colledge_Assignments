// Write a C program to Calculate a Person's Body Mass Index (BMI) and Display the Corresponding BMI Category.

#include <stdio.h>

int main(){

    float weight, height;
    float bmi;

    printf("Please Enter Your Weight in Kilograms : ");
    scanf("%f", &weight);

    printf("Please Enter Your Height in Meters : ");
    scanf("%f", &height);

    bmi = weight/(height*height);

    printf("Your Body Mass Index is : %.5f \n", bmi);

    if (bmi < 18.5){

        printf("Category - Underweight \n");
        printf("Below Healthy Weight; May Indicate Malnutrition, Vitamin Deficiencies or Underlying Health Issues.\n");
    }
    else if (bmi >= 18.5 && bmi <=24.9){

        printf("Category - Normal Weight \n");
        printf("Healthy Weight Range; Typically Associated with Lower Risk of Heart Diseases, Diabetes, etc.");
    }
    else if (bmi >= 25 && bmi <= 29.9){

        printf("Category - Overweight \n");
        printf("Increased Risk of Cardiovascular Diseases, High Blood Pressure and Type 2 Diabetes.");
    }
    else if (bmi >= 30 && bmi <= 34.9){

        printf("Category - Obesity Class I \n");
        printf("Moderate Obesity; Higher Risk of Chronic Health Conditions.");
    }
    else if (bmi >= 35 && bmi <= 39.9){

        printf("Category - Obesity Class II \n");
        printf("Severe Obesity; Significantly Higher Health Risks.");
    }
    else if (bmi >= 40){

        printf("Category - Obesity Class III \n");
        printf("This is Also Known as “Morbid” or “Extreme” Obesity; Very High Risk of Serious Illness or Death from Health Conditions like Heart Diseases, Strokes or Diabetes.");
    }

    return 0;
}