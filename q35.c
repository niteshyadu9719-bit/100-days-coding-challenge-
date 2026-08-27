/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 18 Question : 35
* Date : 27-08-2026
*
*PROBLEM  STATEMENT :
*<Write a program to print all factors of a given number.>
*/

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}