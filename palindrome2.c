#include <stdio.h>
int ispalindrome(int n);
int main()
{
    int n;
    scanf("%d", &n);
    if (ispalindrome(n)==1)
        printf("Palindrome");
    else
        printf("not palindrome");
    return 0;
}

int ispalindrome(int n){
    if (n==reverse(n))
        return 1;
}

int reverse(int n)
{
    int rem, original, rev;
    n=original;
    rev=0;
    if(n!=0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;  
}