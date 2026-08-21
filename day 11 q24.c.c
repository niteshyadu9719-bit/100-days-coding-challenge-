/*
* Name : Nitesh Yadav
* Sap Id : 59003204
* Day : 12 Question : 24
* Date : 21-08-2026
*
*PROBLEM  STATEMENT :
*<Q24: Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit>
*/
#include <stdio.h>

 int main() {
 int units;5
 float bill;

 printf("Enter units consumed:");
 scanf("%d", &units);

 if (units <100) {
    bill = units * 5;
 }
 else if (units <=200) {
    bill = (100 * 5) + (100 * 7) + (units - 100) *7;
 }
 else if (units <=300) {
    bill = (100 * 5) + (100 * 7) + ( units - 200) * 10;
 }
 else {
    bill = (100 * 5) + (100 * 7) + (100 * 10) + (units -300) * 12;
 }

  printf("Bill: %.0f", bill);
   return 0;
 }
