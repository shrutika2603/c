#include <stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        c = 1;
    }

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}