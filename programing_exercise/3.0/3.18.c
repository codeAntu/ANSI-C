#include<stdio.h>
#include<math.h>
int main()
{
    int n ;

    printf("Number         Square-root         Square\n");

    for(n = 0 ; n <= 100 ; n += 10) {
        printf("%d             %f              %d\n",n,sqrt(n),n*n);

    }

    return 0;
}
