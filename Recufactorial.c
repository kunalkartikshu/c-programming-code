#include <stdio.h>
/* C program to find factorial of a number using recursion.
in this code we use a recursive function to calculate the factorial of a number. 
the  function calls itself until values reaches the base case (when n is 0 or 1).

*/
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