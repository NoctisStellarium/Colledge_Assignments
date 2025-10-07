// Write a C Program To Create a Recursive and Non-Recursive Function To Find The Factorial of a Number. Using This Function, Compute the Binomial Coefficient. Tabulate the results for Different Values of n and r With Suitable Messages.

#include <stdio.h>

// Recursive Function to Calculate Factorial
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

// Non-Recursive Function to Calculate Factorial
unsigned long long factorial_non_recursive(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to Calculate Binomial Coefficient Using Factorial
unsigned long long binomial_coefficient(int n, int r, int use_recursive) {
    if (r > n) return 0;
    if (use_recursive) {
        return factorial_recursive(n) / (factorial_recursive(r) * factorial_recursive(n - r));
    } else {
        return factorial_non_recursive(n) / (factorial_non_recursive(r) * factorial_non_recursive(n - r));
    }
}

int main() {
    int n, r;
    printf("Enter Values for n and r (n >= r >= 0): ");
    scanf("%d %d", &n, &r);

    if (n < r || r < 0) {
        printf("Invalid Input. Ensure That n >= r >= 0.\n");
        return 1;
    }

    unsigned long long binom_recursive = binomial_coefficient(n, r, 1);
    unsigned long long binom_non_recursive = binomial_coefficient(n, r, 0);

    printf("Binomial Coefficient C(%d, %d) using Recursive Factorial: %llu\n", n, r, binom_recursive);
    printf("Binomial Coefficient C(%d, %d) using Non-Recursive Factorial: %llu\n", n, r, binom_non_recursive);

    return 0;
}