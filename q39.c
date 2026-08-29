/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 20 Question : 39
* Date : 29-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to find the product of odd digits of a number>.
*/
#include <stdio.h>
int main()
{
    int num, digit, product = 1, hasOddDigit = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0) // Check if the digit is odd
        {
            product *= digit; // Multiply the odd digit to the product
            hasOddDigit = 1; // Flag to indicate at least one odd digit was found
        }
        num /= 10; // Remove the last digit
    }

    if (hasOddDigit)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found in the number.\n");

    return 0;
}
