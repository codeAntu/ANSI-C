#include<stdio.h>

int main() {

    int a, b;
    float ans;

    printf("Enter valus of a and b ");
    scanf("%d",&a);
    scanf("%d",&b);

    ans = (a * 1.0)/ b;

    printf("%d / %d = %f ",a,b,ans);

}
