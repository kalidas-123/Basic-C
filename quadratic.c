//C PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2;

    printf("Enter the values of a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);

    d = ((b * b) - (4 * a * c));

    if(d > 0)
    {
        root1 = ((- b) + sqrt(d)) / (2 * a);
        root2 = ((- b) - sqrt(d)) / (2 * a);
        printf("Root1 = %f\nRoot2 = %f\n",root1,root2);
    }
    else if(d < 0)
    {
        root1 = root2 = - b / (2 * a);
        printf("Root1 = Root2 = %f\n",root1);
    }
    else
    {
        printf("The roots are imaginary\n");
    }

    return 0;
}