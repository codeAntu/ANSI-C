#include<stdio.h>

int main() {
    int x,y,z,t;

    x = 3;
    y = 4;
    z = 5;

    printf("Before rotating the values \n ");
    printf("x = %D \n y = %d \n z = %d \n",x,y,z);
    
    t = x;
    x = y;
    y = z;
    z = t;
    
    printf("After rotating the values \n ");
    printf("x = %D \n y = %d \n z = %d ",x,y,z);

}
