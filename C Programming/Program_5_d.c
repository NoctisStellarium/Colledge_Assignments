// Declare a Static Local Variable Inside a Function. Observe How its Value Persists Across Function Calls.
#include <stdio.h>

int function(){

    static int number = 10;   // Using Static So That The Next Time The Function Is Called Its Remembers The Changes Made
    printf("The Static Number Is : %d \n", number);
    number++;   // If Static Is Not Used This Is Irrelevant (It Will Always Print 10 Whenever The Function Is Called)

    return 0;
}

int main(){

    int n;
    printf("How Many Times You Want To Call The Function : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        function();
    }
    return 0;
}