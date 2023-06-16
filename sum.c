#include <stdio.h>
int printSum(int n);
int main(){
    printf("%d\n", printSum(5));
    return 0;
}

int printSum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1= printSum(n-1); //sum of 1 to n-1
    int sumN=sumNm1+n;
}