#include<stdio.h>

int main()
{
    int n;
    float cost= 250;

    printf("Enter number of cals : ");
    scanf("%d",&n);

    if(n > 100) {
        cost = 250 + (n - 100)* 1.25;
    }

    printf("Total cost %f ",cost );
    return 0;
}
