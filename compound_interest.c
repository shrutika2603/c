#include <stdio.h>
#include <math.h>

int main(){
    float p, r,t, ci ,a=0;
    scanf("%f%f%f", &p, &r, &t);
    a = a + (p*pow((1+(r/100)), t));
    ci = a - p;
    printf("%.2f", ci);
    return 0;
}