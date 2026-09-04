/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 26Question : 51
* Date : 04-09-2026
*
* PROBLEM  STATEMENT :
* <Write a program to print the following pattern:>
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main (void) {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 5; j++) {
            if (j < i) {
                printf(" ");
            } else {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}