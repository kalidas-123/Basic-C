//C PROGRAM TO PRINT AREA AND PRIMETER OF CIRCLE

#include<stdio.h>
int main()
{
    int r;
    float area,peri;

    printf("Enter the radius\n");
    scanf("%d",&r);

    area = 3.14*r*r;
    printf("The area of circle is %f\n",area);

    peri = 2*3.14*r;
    printf("The perimeter of circle is %f",peri);

return 0;
}