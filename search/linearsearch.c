#include <stdio.h>

int search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,7,8,11};
    int x=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=search(arr, n, x);

    if(result==-1){
        printf("No such element found");
    }
    else{
        printf("Element found at : %d",result);
    }
    return 0;
}