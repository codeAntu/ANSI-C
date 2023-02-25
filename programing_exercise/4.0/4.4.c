#include<stdio.h>

int main()
{
    int x,i,j;
    float n;
    printf("Enter a number : ");
    scanf("%f",&n);
    x = n;

    for(i=1; i<=(n-x)*10; i++) {
        for(j=1; j<n; j++) {
            printf("*   ");
        }
        printf("\n");
    }
    return 0;
}
