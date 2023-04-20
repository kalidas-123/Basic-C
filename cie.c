//C PROGRAM TO CALCULATE TOTAL CIE MARKS AND PRINT GRADE OF A STUDENT

#include<stdio.h>
int main()
{
    int ia1,ia2,ia3,cta,small,cie;

    printf("Enter ia1,ia2 and ia3 marks\n");
    scanf("%d%d%d",&ia1,&ia2,&ia3);

    printf("Enter cta marks\n");
    scanf("%d",&cta);

    small = ia1;
    if(ia2 < small)
        small = ia2;
    if(ia3 < small)
        small  = ia3;   

    cie = ia1 + ia2 + ia3 - small + cta;

    if(cie >= 45)
        printf("Greade is S\n");
    else if(cie >= 37)
        printf("Grade is A\n");
    else if(cie >= 30)
        printf("Grade is B\n");
    else if(cie >= 25)
        printf("Grade is C\n");
    else if(cie >= 22)
        printf("Grade is D\n");
    else if(cie >= 20)
        printf("Grade is E\n");
    else
        printf("Grade is F\n");

    return 0;                     

 
}