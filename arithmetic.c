//C PROGRAM TO PERFROM ARITHMETIC OPERATIONS 

#include<stdio.h>
int main()
{
    int a,b,sum,diff,prod,div;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    sum = a+b;
    printf("The sum of %d and %d is %d\n",a,b,sum);

    diff = a-b;
    printf("The difference of %d and %d is %d\n",a,b,diff);

    prod = a*b;
    printf("The product of %d and %d is %d\n",a,b,prod);

    div = a/b;
    printf("The quotient of %d and %d is %d\n",a,b,div);

return 0; 
}