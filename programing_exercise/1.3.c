#include<stdio.h>
/*print this pattern
*
* *
* * *
* * * *
*/
int main()
{
    int i,j;
    for (i=1; i<5;i++) {
        for (j=1; j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }


}
