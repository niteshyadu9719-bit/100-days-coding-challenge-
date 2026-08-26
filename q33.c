/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 16 Question : 33
* Date : 26-08-2026
*
* PROBLEM  STATEMENT :
* <Write a program to check if a number is an Armstrong number.>
*/
#include <stdio.h>

int main(void)
{
	int number, original, remainder, digits = 0;
	long long sum = 0;

	printf("Enter a number: ");
	if (scanf("%d", &number) != 1 || number < 0) {
		printf("Invalid input.\n");
		return 1;
	}

	original = number;

	if (number == 0) {
		digits = 1;
	} else {
		int value = number;
		while (value != 0) {
			digits++;
			value /= 10;
		}
	}

	number = original;
	do {
		int power = 1;
		remainder = number % 10;
		for (int i = 0; i < digits; i++) {
			power *= remainder;
		}
		sum += power;
		number /= 10;
	} while (number != 0);

	if (sum == original) {
		printf("%d is an Armstrong number.\n", original);
	} else {
		printf("%d is not an Armstrong number.\n", original);
	}

	return 0;
}

