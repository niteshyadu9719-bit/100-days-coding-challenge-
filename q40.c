/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 20 Question : 40
* Date : 29-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to find the 1’s complement of a binary number and print it.>
*/
#include <stdio.h>
int main()
{
    int binary, decimal = 0, base = 1, remainder, onesComplement;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while (binary > 0)
    {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    // Calculate 1's complement
    onesComplement = ~decimal;

    printf("1's complement of the binary number is: %d\n", onesComplement);
    return 0;
}
