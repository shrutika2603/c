/*palindrome using iteration*/

#include <stdio.h>
int main(){
    int n, original, rem, reverse=0;
    scanf("%d", &n);
    printf("%d\n", n);
    n=original;
    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }

    if(reverse=original){
        printf("The number is palindrome");
    }


    return 0;
}