#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[100];

    scanf("%s", filename);
    fp = fopen(filename, "r");
    return 0;
}