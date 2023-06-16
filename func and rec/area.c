#include <stdio.h>
#include <math.h>

float printSquare(float n);
float printCircle(float r);
float printRectangle(float l,float b);

int main(){
    float n, r, l, b;
    scanf("%f", &n);   
    scanf("%f", &r);
    scanf("%f", &l);
    scanf("%f", &b);
    
    float area = printSquare(n);
    float area2 = printCircle(r);
    float area3 = printRectangle(l,b);
    printf("%f\n", area);
    printf("%f\n", area2);
    printf("%f\n", area3);
    return 0;
}

float printSquare(float n){
    return n*n;
}

float printCircle(float r){
    return 3.14*r*r;
}

float printRectangle(float l, float b){
    return (l*b);
}
