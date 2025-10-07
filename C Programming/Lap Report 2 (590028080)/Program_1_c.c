// Write a C Program to Read a List of Integers From The User And Store It In a Single Dimensional Array. Also Find The Frequency Of a Particular Number In a List of Integers.

#include <stdio.h>

int main(){

    int n, num, freq = 0;
    int i;

    printf("Enter The Number of Elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements:\n");

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter The Number To Find Its Frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++){
        if(arr[i] == num){
            freq++;
        }
    }

    printf("The Frequency of %d is: %d\n", num, freq);

    return 0;
}