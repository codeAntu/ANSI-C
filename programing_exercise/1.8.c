include<stdio.h>

int fun( int a, int b,int c) {
    int x;

    x = a / ( b - c );
    printf("Value of x = %d", x);
    return 0;
}
int main()
{
    int a,b,c;
    a = 250;
    b = 85;
    c = 25;
    fun(a,b,c);
}
