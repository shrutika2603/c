#include <stdio.h>

void printNamaste(); //function prototype / declaration
void printBonjour();

//function call
int main(){
    char ch;
    printf("Enter f for french and i for indian: ");
    scanf("%c", &ch);
    
    if (ch=='f')
        printBonjour();
    else
        printNamaste();

    return 0;
}

//function definition
void printNamaste(){
    printf("Namaste\n");
}

void printBonjour(){
    printf("Bonjour!\n");
} 