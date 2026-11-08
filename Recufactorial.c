#include <stdio.h>

int factorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return (n * factorial(n-1));
    }
}

int main() {
    int num ;
    printf("Enter a number to get factorial of that number:\n ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}