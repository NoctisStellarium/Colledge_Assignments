// Write a C Program To Read a List of Integers From the User and Store It In a Single Dimensional Array. Also Compute The Second Largest Integer In The List of Integers.

#include <stdio.h>

int main(){

    int n;
    int i, j, temp;

    printf("Enter The Number of Elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements:\n");

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Array Should Have at Least Two Elements to Find the Second Largest.\n");
        return 1;
    }

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The Second Largest Element Is: %d\n", arr[1]);

    return 0;
}