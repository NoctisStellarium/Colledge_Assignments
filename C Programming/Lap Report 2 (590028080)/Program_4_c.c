// Write a C Program to Use the Function That Accepts Pointers as Parameters. Pass Variables by Reference Using Pointers and Modify their Values Within the Function.

#include <stdio.h>

void modifyValues(int *a, int *b) {
    *a += 10; 
    *b *= 2;  
}

int main() {
    int x = 5;
    int y = 10;

    printf("Before Modification: x = %d, y = %d\n", x, y);

    modifyValues(&x, &y); // Pass the Addresses of x and y

    printf("After Modification: x = %d, y = %d\n", x, y);

    return 0;
}