/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 16 Question : 34
* Date : 26-08-2026
*
* PROBLEM  STATEMENT :
*<Write a program to check if a number is prime>
*/

#include <stdio.h>

int main(void)
{
	int number;
	int is_prime = 1;

	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		return 1;
	}

	if (number < 2) {
		is_prime = 0;
	} else {
		for (int divisor = 2; divisor <= number / divisor; divisor++) {
			if (number % divisor == 0) {
				is_prime = 0;
				break;
			}
		}
	}

	if (is_prime) {
		printf("%d is prime.\n", number);
	} else {
		printf("%d is not prime.\n", number);
	}

	return 0;
}