#include<stdio.h>

int main()
{
    int a,b,c,largest;
    
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    printf("Enter value of c :");
    scanf("%d",&c);
    
    largest = a > b ? a > c ? a : c : b > c ? b : c;
    
    printf("Largest number = %d ",largest);
 
    return 0;
}
