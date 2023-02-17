#include<stdio.h>

int main()
{
    
    float pp, sv, sy, dep;
    
    /*purchase price , salvage price , yrars of service , depreciation*/ 
    
    pp = 100;
    sy = 5;
    dep = 10;
    
    sv = pp - dep * sy;

    printf("Salvage value  = %f",sv);    
    
    return 0;
}
