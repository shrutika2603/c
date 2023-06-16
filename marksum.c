#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender)
{
    // Write your code here.
    int i, sum = 0;
    for (i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2)
        sum += *(marks + i);
    return sum;
}

int main()
{
    int n, i, res;
    char genre;
    scanf(" %d", &n);
    int marks[n];
    for (i = 0; i < n; i++)
        scanf(" %d", &marks[i]);
    scanf(" %c", &genre);
    res = marks_summation(marks, n, genre);
    printf("%d", res);
    return 0;
}