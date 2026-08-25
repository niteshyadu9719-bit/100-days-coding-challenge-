/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 16 Question : 31
* Date : 25-08-2026
*
*PROBLEM  STATEMENT :
<Write a program to take a number as input and print its equivalent binary representation.>
*/
#include <stdio.h>
int main()
{
    int num, binary[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    return 0;
}
