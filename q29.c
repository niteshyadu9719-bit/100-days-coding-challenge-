/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 15 Question : 29
* Date : 24-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to calculate the factorial of a number.>
*/
 
#include <stdio.h>

int main ()
{ 
    int n, factorial = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is: %d", n, factorial);

    return 0;
}
