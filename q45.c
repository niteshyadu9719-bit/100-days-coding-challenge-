/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 23 Question : 45
* Date : 23-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.>
*/

#include <stdio.h>
int main (void) {
    int n, i;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        sum += (2.0 * (i + 1)) / (3.0+  (4.0 * i));
    }
    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}