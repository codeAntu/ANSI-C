#include<stdio.h>

int main()
{
    int x;
    float n;

    printf("Enter a number : ");
    scanf("%f",&n);
    x = n;
    if(n > 0 && n - x >= 0.5)
        x += 1;
    if(n < 0 && n - x <= -0.5)
        x -= 1;

    printf("Nearest Integer : %d",x);
    return 0;
}
