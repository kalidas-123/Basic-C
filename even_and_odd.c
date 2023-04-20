//C PROGRAM TO CHECK A NUMBER IS EVEN OR ODD

#include<stdio.h>
int main()
{
    int num = 1;

    printf("Enter the number\n");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Number %d is even\n",num);
    else
        printf("Number %d is odd\n",num);

    return 0;        
}