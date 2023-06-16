#include <stdio.h>

void square(int n);
void _square(int* n);
int main(){
    int num = 4;
    square(num);
    printf("number = %d\n", num);

    _square(&num);
    printf("number = %d\n", num); 
    return 0;
}

//call by value
void square(int n){
    n = n*n;
    printf("square = %d\n", n);
}

//call by reference
void _square(int* n){
    *n = (*n)*(*n);
    printf("square = %d\n", *n);
}