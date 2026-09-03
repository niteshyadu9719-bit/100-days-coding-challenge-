/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 25 Question : 50
* Date : 03-09-2026
*
* PROBLEM  STATEMENT :
* < Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
int main(void) {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 5; j++) {
            if (j <= 5 - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}