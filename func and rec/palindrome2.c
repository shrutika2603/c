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
    return 0;
}

int reverse(int n)
{
    int rem;
    static int rev=0;
    if(n!=0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        reverse(n / 10);
    }
    else{
        return rev;
    }
    return rev;  
}

/*
#include <stdio.h>

int isPalindrome(int number, int temp) {
    if (number == 0)
        return temp;

    temp = (temp * 10) + (number % 10);
    return isPalindrome(number / 10, temp);
}

int checkPalindrome(int number) {
    int reverse = isPalindrome(number, 0);
    return reverse == number;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (checkPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
*/