/*  A
    AB
    ABC
    ABCD */

#include<stdio.h>
int main(){
    int i, c;
    char ch;
    scanf("%c",&ch);
    c=ch;
    for(i='A'; i<=ch; i++){
        for(int j='A'; j<=i; j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}