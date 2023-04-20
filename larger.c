//C PROGRAM TO CHECK LARGER OF TWO NUMBERS

#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    if(a > b)
        printf("%d is larger than %d",a,b);
    if(a < b)
        printf("%d is larger than %d",b,a);

    return 0;    

}