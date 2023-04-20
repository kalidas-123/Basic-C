//C PROGRAM TO AREA OF TRIANGLE USING SIDE 
//area = sqrt(s*(s - a)*(s - b)*(s - c)) where s = (a + b + c) / 2

#include<stdio.h>
#include<math.h>
int main()
{
    float area,s,a,b,c;

    printf("Enter the values a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);

    s = (a + b + c) / 2;
    area = sqrt(s*(s - a)*(s - b)*(s-c));

    printf("The area of triangle is %f\n",area);

    return 0;
}