/*21. Write a C program to left rotate an array. */
#include <stdio.h>
#define SIZE 10
void printArray(int arr[]);
void rotateByOne(int arr[]);
int main()
{
    int i, N;
    int arr[SIZE];
    printf("Enter 10 elements array: ");
    for(i=0; i<SIZE; i++)   scanf("%d", &arr[i]);
    printf("Enter number of times to left rotate: ");
    scanf("%d", &N);
    N = N % SIZE;
    printf("Array before rotationn");
    printArray(arr);
    for(i=1; i<=N; i++)  rotateByOne(arr);
    printf("\n\nArray after rotation\n");
    printArray(arr);
    return 0;
}
void rotateByOne(int arr[])
{
    int i, first;
    first = arr[0];
    for(i=0; i<SIZE-1; i++)
        arr[i] = arr[i + 1];
    arr[SIZE-1] = first;
}
void printArray(int arr[])
{
    int i;
    for(i=0; i<SIZE; i++)
        printf("%d ", arr[i]);
}
