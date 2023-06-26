// Merge sort in C

#include <stdio.h>
#include <stdlib.h>

//Changed merge() ------ Commit by Subhadeep3902
void merge(int *arr, int p, int q, int r)
{
        int n1 = p;
        int n2 = q + 1;
        int *buffer = (int *)malloc((r - p + 1) * sizeof(int));
        int t = 0;
        while (n1 <= q && n2 <= r)
        {
                if (arr[n1] < arr[n2])
                {
                        buffer[t++] = arr[n1++];
                }
                else
                {
                        buffer[t++] = arr[n2++];
                }
        }
        while (n1 <= q)
                buffer[t++] = arr[n1++];
        while (n2 <= r)
                buffer[t++] = arr[n2++];

        for (int i = p; i <= r; i++)
        {
                arr[i] = buffer[i - p];
        }
        free(buffer);
}
// Ends ------------------------------------------


// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r)
{
        if (l < r)
        {

                // m is the point where the array is divided into two subarrays
                int m = l + (r - l) / 2;

                mergeSort(arr, l, m);
                mergeSort(arr, m + 1, r);

                // Merge the sorted subarrays
                merge(arr, l, m, r);
        }
}

// Print the array
void printArray(int arr[], int size)
{
        for (int i = 0; i < size; i++)
                printf("%d ", arr[i]);
        printf("\n");
}

// Driver program
int main()
{
        int arr[] = {6, 5, 12, 10, 9, 1};
        int size = sizeof(arr) / sizeof(arr[0]);

        mergeSort(arr, 0, size - 1);

        printf("Sorted array: \n");
        printArray(arr, size);
}