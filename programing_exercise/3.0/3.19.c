#include<stdio.h>

int main()
{
    int n;

    printf("Enter a positive non zero number : ");
    scanf("%d",&n);
    if(n % 2 == 0) {
        printf("The numebr %d is a even number ",n);
        return 0;
    }
    printf("The %d number is a odd number ",n);
    return 0;
}
