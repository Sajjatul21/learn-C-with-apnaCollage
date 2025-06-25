#include <stdio.h>
// write a function to reverse an array
void reverse(int arr[], int n);
void printArr(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
    printArr(arr, 6);
    return 0;
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int first = arr[i];
        int second = arr[n - i - 1];
        arr[i] = second;
        arr[n - i - 1] = first;
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}