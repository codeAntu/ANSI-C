#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c;
    float s,area;

    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Enter value of c : ");
    scanf("%d",&c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of a teingle is %f  ",area);

}