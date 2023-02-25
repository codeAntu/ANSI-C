#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter two two digits int numbers -> ");
    scanf("%d %d",&a,&b);
    
    printf("                 %d\n",a);
    printf("           x     %d\n",b);
    printf("           __________\n");
    printf("%d x %d is      %4d\n",b%10,a, a*(b%10));
    printf("%d x %d is     %4d\n",b/10,a, a*(b/10));
    printf("           __________\n");
    printf("Add them     %6d",a*b);

    
    return 0;
}
