#include<stdio.h>
#define PI 3.14

int main() {
   int r;
   float area ;

   printf("Enter the radius of the circle :  ");
   scanf("%d",&r);

   area  = PI * r * r;
   
   printf("area of the circle is %f",area);
   
    
}
