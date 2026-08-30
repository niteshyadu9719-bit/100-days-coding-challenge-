/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 22 Question : 44
* Date : 31-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.>
*/
#include <stdio.h>
int main (void) {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1; // Odd numbers: 1, 3, 5, ...
        int denominator = 2 * i + 2; // Even numbers: 2, 4, 6, ...
        sum += (double)numerator / denominator;
    }

    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}
