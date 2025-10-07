// Write a C Program That Prompts The User to Enter Their Name and Age.

#include <stdio.h>
#include <string.h>

int main(){

    char name[50];
    int age;

    printf("Please Enter Your Name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Please Enter Your Age : ");
    scanf("%d", &age);
    
    printf("Your Name is %s and Your Age is %d ", name, age);

    return 0;
}