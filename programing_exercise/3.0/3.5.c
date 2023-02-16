#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    while(n > 0){
    printf("%d \n",n);
    n = n / 10;
    }
    
    return 0;
}
