#include <stdio.h>

int main(){
    int age=22;
    int *ptr=&age;
    int **pptr=&ptr;
    // int _age=*ptr;

    // printf("%p\n", &age);
    // printf("%u\n", &age);

    printf("%p\n",&age);
    printf("%p\n",&ptr);
    printf("%d\n",**pptr);

    return 0;
} 