/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 21 Question : 42
* Date : 30-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to check if a number is a perfect number.>
*/
#include <stdio.h>

int main(void) {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

