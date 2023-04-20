//CONVERT INPUT IN SECONDS TO MINUTES AND HOURS AND PRINT IN THE FORM OF HH:MM:SS

#include<stdio.h>
int main()
{
    int ss,mm,hh,temp;

    printf("Enter the value of time in seconds\n");
    scanf("%d",&ss);

    hh = ss / 3600;
    temp = ss % 3600;
    mm = temp / 60;
    ss = temp % 60;
    
    printf("Time in HH:MM:SS is %d:%d:%d",hh,mm,ss);
    return 0;
}