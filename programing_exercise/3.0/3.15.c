#include<stdio.h>

int main()
{
    int a, b, c, avg, sum, large, small;

    printf("Enter value of a :");
    scanf("%d",&a);
    printf("Enter value of b :");
    scanf("%d",&b);
    printf("Enter value of c :");
    scanf("%d",&c);

    printf("Sum of the three values is %d\n",a+b+c);

    printf("Average of three values %f\n",(a+b+c)*1.0/3);

    large = a > b ? a > c ? a : c : b > c ? b : c ;

    small = a > b ? b > c ? c : b : a > c ? c : a;

    printf("The largest value : %d\n",large);
    printf("The smallast value : %d\n",small);


    return 0;
}
