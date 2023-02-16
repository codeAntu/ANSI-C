#include<stdio.h>


int fun(int n, int x) {
    int t;
    if(n>=x)
    {
        fun(n,x*10);
    }
    n = n % x;
    printf("%d\n",n);
    return 0;
}
int main()
{
    int n,x=10;

    n = 5678;
    fun(n,x);
    return 0;
}

