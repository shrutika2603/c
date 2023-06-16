#include <stdio.h>
#include <stdlib.h>
#define MAX    100

int bsearch(int arr[], int n, int val, int *pos){
    int low=0, high=n-1, i=0;
    *pos=-1;
    while(low<=high){
        int m = (low+high)/2;
        i++;
        if (arr[m]==val){
            *pos=m;
            break;
        }
        else if (arr[m]<val){
            low=m+1;
        }
        else{
            high=m-1;
        }
    }
    if (*pos==-1){
        printf("ERROR : Not found");
        exit(1);
    }
    return i;
}

int main(){
    int arr[MAX], pos, n, val, passes;

    scanf("%d", &n); //enter size

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]); //enter elements
    }

    scanf("%d",&val); //enter element to be searched
    
    if(n==0){
        printf("ERROR: Empty list");
        exit(1);
    }
    passes=bsearch(arr,n,val,&pos);
    printf("%d found at index: %d. Number of passes: %d", val,pos,passes);
    
    return 0;
}