/*Wap to check armstrong number
eg. 153 is an armstrong number as (1*1*1)+(5*5*5)+(3*3*3)=153 */

#include <stdio.h>
int main(){
    int n,org,a, arm=0;
    scanf("%d",&n);
    org=n;
    while(n>0){
        a=n%10;
        arm=arm + a*a*a;
        n=n/10;
    }
    printf("%d",arm);
    if(arm==org){
        printf("%d is an armstrong number",n);
    }
    else{
        printf("NO");
    }


    return 0;
}