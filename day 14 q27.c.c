/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 14 Question :7
* Date : 23-08-2026
*
*PROBLEM  STATEMENT :
Write a program to print the sum of the first n odd numbers.

*/
#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1);
    }

    printf("The sum of the first %d odd numbers is: %d", n, sum);
    return 0;
}