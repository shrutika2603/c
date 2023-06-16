#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter positive numbers (999 to end):\n ");
    for (;;){
        scanf("%d", &n);
        if (n==999){
            break;
        }
        else if (n<0){
            continue;
        }
        else{
            sum += n;
        }
    }
    printf("%d", sum);

    // using while loop:
    //  scanf("%d", &n);
    //  while (n!=999){
    //      if (n>0){
    //          sum += n;
    //      }
    //      scanf("%d", &n);
    //  }
    //  printf("%d", sum);

    //do while loop
    // do
    // {
    //     scanf("%d", &n);
    //     if (n == 999)
    //     {
    //         break;
    //     }
    //     else if (n < 0)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         sum += n;
    //     }
    // } while(1);
    // printf("%d", sum);
    return 0;
}