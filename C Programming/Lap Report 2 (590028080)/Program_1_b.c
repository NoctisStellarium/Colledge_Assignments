// Write a C Program to Read a List of Integers From the User and Store It In a Single Dimensional Array. Also Count and Display Positive, Negative, Odd, and Even Numbers In The Array.

#include <stdio.h>

int main(){

    int n, i;
    int positive_count = 0, negative_count = 0, odd_count = 0, even_count = 0;

    printf("Enter The Number of Elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements:\n");

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] >= 0){
            positive_count++;
        } else {
            negative_count++;
        }

        if(arr[i] % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Positive Numbers: %d\n", positive_count);
    printf("Negative Numbers: %d\n", negative_count);
    printf("Even Numbers: %d\n", even_count);
    printf("Odd Numbers: %d\n", odd_count);
    
    return 0;
}