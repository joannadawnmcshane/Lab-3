#include <stdio.h>

long calculate_factorial(int number )
{
    //Check for invalid input
    if (number < 0 || number > 20)
    {
        return -1;
    }
    long factorial = 1;
    
    // Calculate n × (n-1) × (n-2) × ... × 2 × 1
    for (int i = number; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    return factorial;

}

// DO NOT change the code below
#ifndef ___TEST___
int main() {
    int number =- 1;
    long result = -1;

    printf("Input a positive integer: ");
    scanf("%d", &number);
    result = calculate_factorial(number);
    if ( result < 1 ) 
    {
        printf("The number inputted should be between 1 and 20.\n");
    }
    else
    {
        printf("Factorial: %ld\n", calculate_factorial(number));
    }
    return 0;
}
#endif