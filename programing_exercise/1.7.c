#include<stdio.h>

int add(int a,int b) {
    int c;
    c = a + b;

    printf("%d + %d = %d \n",a,b,c);
}

int sub(int a,int b) {
    int c;
    c = a - b;

    printf("%d - %d = %d \n",a,b,c);

}

int main()
{
    int a,b;

    a = 20;
    b = 10;

    add(a,b);
    sub(a,b);

}
