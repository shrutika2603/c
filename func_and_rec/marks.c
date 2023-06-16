#include <stdio.h>

float marks(float sc, float ma, float sans);
int main(){
    printf("%f\n", marks(50,50,0));
    return 0;
}

float marks(float sc, float ma, float sans){
    float marks = sc + ma + sans;
    float per = (marks/300)*100;
}