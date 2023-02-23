#include<stdio.h>

int main()
{

    int x,y;

    scanf("%d %d",&x,&y);
    printf("%d %d \n",x,y);
    printf("%f\n%f\n%d",(x+y)*1.0/(x-y),(x+y)*1.0/2,(x+y)*(x-y));

    return 0;
}
