//C PROGRAM TO SWAP TWO NUMBERS WITH USING TEMPORARY VARIABLE

#include<stdio.h>
int main()
{
    int a,b,temp;              //temp = temporary variable
    
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    printf("Numbers before swapping are %d and %d\n",a,b);

    temp = a;
    a = b;
    b = temp;
    printf("Numbers after swapping are %d and %d\n",a,b);

return 0;

}