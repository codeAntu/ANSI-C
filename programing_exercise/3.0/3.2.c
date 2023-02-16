#include<stdio.h>

int main()
{
    float x;
    int y;
    
    printf("Enter a floating point number ; ");
    scanf("%f",&x);
    
    y = x;
    y %= 10 ;
    
    printf("The right most digit of the intrgral part of the numbert : %d ",y);
    
    return 0;
}
