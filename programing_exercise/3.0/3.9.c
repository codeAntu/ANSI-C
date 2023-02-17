#include<stdio.h>
#include<math.h>

int main()
{
    
    int dr , sc , hc , eoq ;
    float tbo;
    
    printf("Damage rate = ");
    scanf("%d",&dr);
    printf("Setup cost = ");
    scanf("%d",&sc);
    printf("holding cose per item per unit time  = ");
    scanf("%d",&hc);
    
    eoq = sqrt(( 2 * dr * sc ) / hc);
    tbo = sqrt((2 * sc * 1.0) / (dr * hc));
    
    printf("Economic Oreder Quantity = %d\n",eoq);
    printf("Time Betwween order = %f ",tbo);
    return 0;
}
