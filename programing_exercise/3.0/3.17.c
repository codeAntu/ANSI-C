#include<stdio.h>
#include<math.h>
int main()
{
    int deg ;

    printf("x(degree)      sim(x)      cos(x)\n");
    for(deg = 0 ; deg <= 180 ; deg += 15) {
        printf("    %d        %f      %f\n",deg,sin(deg),cos(deg));
    }
    return 0;
}
