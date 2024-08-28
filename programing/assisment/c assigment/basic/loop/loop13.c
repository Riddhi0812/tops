#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    int i = 1;
    while(i <= n) {
        result = result * i;
        i++;
    }
    return result;
}

int main() 
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    int result = factorial(input);
    printf("The factorial of %d is %d", input, result);
    return 0;
}
