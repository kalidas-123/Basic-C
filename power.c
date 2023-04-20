//C PROGRAM TO CALCULATE POWER UNITS CONSUMED AND BILL AMOUNT 

#include<stdio.h>
int main()
{
    int units;
    float amount;

    printf("Enter the units consumed\n");
    scanf("%d",&units);

    if(units <= 200)
        amount = units * 0.50;
    else if(units <= 400)
        amount = 100 + (units - 200) * 0.65;
    else if(units <= 600)
        amount = 230 + 0.80*(units - 600);
    else
        amount = 390 + 1 * (units - 600);

    printf("Amount is %f\n",amount);

    return 0;                
}