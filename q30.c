/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 15 Question : 30
* Date : 24-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to reverse a given number.>
*/

#include <stdio.h>

 int main()
{
    int n, reverse = 0, remainder;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}

