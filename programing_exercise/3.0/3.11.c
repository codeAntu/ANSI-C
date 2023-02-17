#include<stdio.h>

int main()
{
    int n,sum = 0;
    
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(n > 0){
      sum += n%10;
      n /= 10;
    }
    
    printf("%d",sum);
    
    return 0;
}
