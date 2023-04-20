//C PROGRAM TO TO CALCULATE DISTANCE BETWEEN TWO POINTS

#include<stdio.h>
#include<math.h>       //since we are using 'sqrt' function math.h is to be included
int main()
{
    int x1,x2,y1,y2;
    float d;

    printf("Enter x1,x2,y1,y2 values\n");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("The distance between two points is %f\n",d);

return 0;    

}