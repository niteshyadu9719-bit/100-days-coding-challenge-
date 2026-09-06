/*
* Name : Nitesh Yadav
* Sap Id : 590043204
* Day : 29 Question : 56
* Date : 06-09-2026
*
* PROBLEM  STATEMENT :
*
* <Read and print elements of a one-dimensional array.>
*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}