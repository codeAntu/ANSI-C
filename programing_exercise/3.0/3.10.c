#include<stdio.h>
#include<math.h>

int main()
{

    float R,L,C,f,a;

    ;
    printf("L = ");
    scanf("%f",&L);
    printf("R = ");
    scanf("%f",&R);
    printf("C (choose 1 - 10) = 0.01 * ");
    scanf("%f",&C);

    if(C > 10 ) {
        printf("The capacitance is very large ");
        return 0;
    }

    C = C * 0.01;
    a =  1.0/(L*C) - (R*R)/(4*C*C);
    if(a < 0)
        a = a * (-1);
    f = sqrt(a);

    printf("frequency = %f ",f);
    return 0;
}
