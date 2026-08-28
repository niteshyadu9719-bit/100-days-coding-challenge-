/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 18 Question : 37
* Date : 28-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to find the LCM of two numbers.>
*/
#include <stdio.h>
int main()
{
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    lcm = (num1 > num2) ? num1 : num2; // Start with the greater number
    while(1)
    {
        if(lcm % num1 == 0 && lcm % num2 == 0)
        {
            break; // Found the LCM
        }
        lcm++; // Increment to check the next number
    }
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}