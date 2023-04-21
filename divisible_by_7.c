//C PROGRAM TO COUNT AND PRINT THE SUM OF NUMBERS DIVISIBLE BY 7 BETWEEN 100 TO 200

#include<stdio.h>
int main()
{
    int i,sum = 0,count = 0,rem;

    i = 100;
    xy : rem = i % 7;
    if(rem == 0)
    {
        sum = sum + i;
        count = count + 1;
    }
    if(i < 200)
    {
        i++;
        goto xy;
    }
    else
    {
        printf("The count of the numbers divisible by 7 are %d\n",count);
        printf("Sum of the numbers divisible by 7 are %d\n",sum);
    }
    
    return 0;
}