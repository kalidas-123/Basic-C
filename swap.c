//C PROGRAM TO SWAP TWO NUMBERS WITHOUT USING TEMPORARY VARIABLE

#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printf("Numbers before swapping are %d and %d\n",a,b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("Numbers after swapping are %d and %d\n",a,b);

return 0;
}