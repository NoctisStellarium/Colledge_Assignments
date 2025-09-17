// Write a C program to Print all Ramanujan Numbers up to a Reasonable Limit. A Ramanujan number is the Smallest Number that Can be Expressed as the Sum of Two Cubes in Two Different Ways.

#include <stdio.h>
#include <math.h>

int main(){

    int n;

    printf("Please Write The Limit To See All The Available Ramanujan Numbers : ");
    scanf("%d", &n);

    int max = (int) cbrt(n);   // This Is To Make Cube Root In Whole Number Only (The Decimal Part Is Removed)

    for (int num = 1; num <= n; num++){
        int count = 0;

        for (int a = 1; a <= max; a++){
            for (int b = a; b <= max; b++){
                if (a*a*a + b*b*b == num){
                    count++;

                    if (count > 1){
                        printf("%d\n", num);

                        a = max + 1;
                        b = max + 1;
                    }
                }

            }
        }

    }

    return 0;
}