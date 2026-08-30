/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 22 Question : 43
* Date : 31-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to check if a number is a strong number.>
*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}

int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isStrongNumber(num)) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}
