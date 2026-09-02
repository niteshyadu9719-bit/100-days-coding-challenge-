/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 24 Question : 48
* Date : 20-08-2026
*
* PROBLEM  STATEMENT :
* < Write a program to print the following pattern:>
1
12
123
1234
12345 
*/

#include <stdio.h>
int main(void) {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
