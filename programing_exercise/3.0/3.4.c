#include<stdio.h>

int main()
{
    int l,w,area ,peri;
    
    printf("Enter length of the rectangle ; ");
    scanf("%d",&l);
    printf("Enter width of the rectangle ; ");
    scanf("%d",&w);
    
    area = l * w ;
    peri = 2 * ( l + w );
    
    printf("Area of the rectangle : %d \n",area);
    printf("perimeter of the rectangle : %d ",peri);
    
    return 0;
}
