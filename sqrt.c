#include <stdio.h>
#include <math.h>

double sqroot(double n);
int main(){
    int n;
    scanf("%d", &n);
    printf("%f", sqroot(n));
    return 0;
}

double sqroot(double n){
    if (n<0){
        printf("Imaginary roots");
    }
    else{
        return sqrt(n);
    }
    
}