#include<stdio.h>
/*calculate the radius of a circle */
float cToF(int temp) {
    /* Celsius to Fahrenheit */
    float f;
    f = 9*temp/5 + 32;
    return f;
}

float fToC(int temp){
    /* Fahrenheit to celsius */
    float c;
    c = (temp - 32)*5/9;
    return c;

}
int main()
{
    int temp,i,ans;

    printf("Choose \n1. C to F\n2. F to C");
    scanf("%d",&i);

    switch(i) {
    case 1:
        scanf("%d",&temp);
        ans = cToF(temp);
        printf("%d",ans);

        break;
    case 2:
        scanf("%d",&temp);
        ans = fToC(temp);
        printf("%d",ans);
    }
}