#include<stdio.h>

int main()
{
    int m,n;

    printf("Enter value of m :");
    scanf("%d",&m);
    printf("Enter value of n :");
    scanf("%d",&n);

    if(m % n == 0) {
        printf("%d is multiple of %d",m,n);
        return 0;
    }
    if(n % m == 0) {
        printf("%d is multiple of %d",n,m);
        return 0;
    }

    printf("one is not multiple of other of other one  ");

    return 0;
}
