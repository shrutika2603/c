/*  1
    AB
    123
    ABCD
    12345 */

#include <stdio.h>
int main(){
    int n,i,j;
    char ch;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%2 == 0){
            ch='A';
            for(j=1;j<=i;j++){
                printf("%c",ch);
                ch++;
            }
        }
        else{
            {
                for(j=1;j<=i;j++){
                    printf("%d", j);
                }
            }       
        }
        printf("\n");
    }

    return 0;
}