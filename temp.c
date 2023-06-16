#include <stdio.h>
void temp(int t);
int main(){
    int t;
    scanf("%i", &t);
    temp(t);
    return 0;
}

void temp(int t){
    if (t>50){
        printf("Hot\n");
    }
    else{
        printf("Cold\n");
    }

}