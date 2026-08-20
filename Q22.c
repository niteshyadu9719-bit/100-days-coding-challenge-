/*
* Name : Nitesh Yadav
* Sap Id : 59003204
* Day : 11 Question : 22
* Date : 20-08-2026
*
*PROBLEM  STATEMENT :
*<Write a program to find profit or loss percentage given cost price and selling price.>
*/

#include <studio.h>

int main(void)
{
    float cp,sp,profit,loss,percentage;

    printf("Entr cost price:");
    scanf("%f",&cp);

    printf("Enter selling price:");
    scanf("%f",&sp);

    if (sp > cp)
    {
        profit = sp-cp;
        percentage = (profit / cp)* 100;
        printf("profit = %.2f\n", profit);
        printf("profit percentage = %2f%%", percentage)
    }
    else if (cp > sp)
    {

        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("loss = %2f\n", loss);
        printf("loss Percentage = %.2f%%",Percentage);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
