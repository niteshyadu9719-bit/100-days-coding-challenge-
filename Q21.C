/*
* Name : Nitesh Yadav
* Sap Id : 59003204
* Day : 11 Question : 21
* Date : 20-08-2026
*
*PROBLEM  STATEMENT :
*<Write a program to display the month name and number of days using switch-case for a given month number.>
*/

#include <studio>

int main(void) {
    int month;

printf("Enter month number:");
scanf("%d",&month);

  switch(month) {
 case 1:
      printf("January -31 days");
    break;
    case 2:
       printf("february -28 days");
    break;
    case 3:
        printf("march -31 days");
        break;
    case 4:
        printf("april -30 days");
        break;
    case 5:
        printf("may -31 days");
        break;
    case 6:
        printf("june -30 days");
        break;
    case 7:
        printf("july -31 days");
        break;
    case 8:
        printf("august -31 days");
        break;
    case 9:
        printf ("september -30 days");
        break;
    case 10:
        printf("october -31 days");
        break;
    case 11:
        printf("november - 30 days");
        break;
    case 12:
        printf (" december -31 days");
        break;
    default:
        printf ("invalid month number");
  }

   return 0;
}
