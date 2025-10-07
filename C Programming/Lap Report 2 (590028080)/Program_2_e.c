// Write a C Program To Use The Function REVERSE (str) That Accepts a String Argument. Use This Function to Find the Reverse of a Given String.

#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character if present

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}