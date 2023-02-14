#include<stdio.h>
/*calculate the radius of a circle */
int main()
{
    int radius ;
    float pie = 3.14,area ;
    
    printf("Enter the radius of a circle :-");
    scanf("%d",&radius);
    area = pie*radius*radius;
    
    printf("Area of the circle %f",area);
}
