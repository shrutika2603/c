#include <stdio.h>

int printSum(int n);

int main(){
    int n;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = printSum(n);
    printf("The sum of digits is : %d\n", sum);
    return 0;
}

int printSum(int n){
    if (n!=0){
        return(n%10+printSum(n/10));
    }
    else{
        return 0;
    }
}