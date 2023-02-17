#include<stdio.h>

int main()
{
    
    int s , u , a , t ;
    
    printf("u = ");
    scanf("%d",&u);
    printf("a = ");
    scanf("%d",&a);
    printf("t = ");
    scanf("%d",&t);
    
    s = u * t + ( a * t *t ) / 2 ;
    
    printf("Distance = %d",s);
    return 0;
}
