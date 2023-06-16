#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    FILE *fp;
    char filename[100];

    scanf("%s", filename);
    fp=fopen(filename,"w");

    scanf("%d",&n);
    fprintf(fp,"%d",n);
    fclose(fp);
    return 0;
}