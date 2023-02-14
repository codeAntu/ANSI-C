#include<stdio.h>
#include<math.h>

int main() {
    int x1,y1,x2,y2;
    float r,cir,area;

    printf("Center of ma circle  : ");
    scanf("%d,%d",&x1,&y1);

    printf("Point on the circumference ");
    scanf("%d,%d",&x2,&y2);

    r = sqrt (pow((x2-x1),2)+ pow((y2-y1),2));

    cir = 2*M_PI*r;
    printf("circumference of the cicle %f",cir);

    area = M_PI*r*r;
    printf("\nArea of circle %f ",area );


}