//C PROGRAM TO PRINT TRAFFIC SIGNAL

#include<stdio.h>
int main()
{
    char signal;

    printf("Enter Traffic signal\n");
    scanf("%c",&signal);

    if(signal == 'r' || signal == 'R')
        printf("STOP\n");
    else if(signal == 'y' || signal == 'Y')
        printf("READY\n");
    else if(signal == 'g' || signal == 'G')
        printf("GO...\n");
    else 
        printf("Inavlid choice\n");

    return 0;                
}