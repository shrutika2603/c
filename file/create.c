/*#include <stdio.h>
int main(){
    FILE *fp;
    char filename[100];

    scanf("%s", filename);
    fp =fopen("std.txt","r");

    if(fp==NULL){
        printf("No Such File Exists");
        exit(1);
    }
    else{
        printf("Success");
    }
    fclose(fp);
    return 0;
}*/

#include<stdio.h>
int main() {
   /* try to open file to read */
   FILE *file;
   if (file = fopen("std.txt", "r")) {
      fclose(file);
      printf("file exists");
   } else {
      printf("file doesn't exist");
   }
}
