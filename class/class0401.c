#include <stdio.h>

void reverseArray(int a[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

int main()
{
    // int counts[100];
    // char *ptr;
    // FILE *fileptr = fopen("./testfile.txt", "r");
    // char* str[1000];

    // return 0;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}