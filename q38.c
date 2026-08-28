/*
 * Name : Nitesh Yadav
 * Sap Id : 590043204
 * Day : 18 Question : 38
 * Date : 28-Aug-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of digits of a number.
 */

#include <stdio.h>

int main(void)
{
	int number, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0)
		number = -number;

	while (number != 0) {
		sum += number % 10;
		number /= 10;
	}

	printf("Sum of digits = %d\n", sum);
	return 0;
}