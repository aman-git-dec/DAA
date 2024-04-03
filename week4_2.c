#include <stdio.h>
int comp = 0, swaps = 0;
void swap(int arr[], int j, int k)
{
    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
    swaps++;
}
void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    comp++;
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    comp++;
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr, i, largest);
        maxHeapify(arr, n, largest);
    }
}
void buildMaxHeap(int arr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}
void heapSort(int arr[], int n, int k)
{
    buildMaxHeap(arr, n);
    for (int i = n - 1; i >= n - k; i--)
    {
        swap(arr, 0, i);
        maxHeapify(arr, i, 0);
    }
}
void main()
{
    int n, t, k;
    printf("Enter number of test cases : ");
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        printf("Enter size : ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter elements : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Enter K : ");
        scanf("%d", &k);
        heapSort(arr, n, k);
        printf("\nSorted array is : \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        printf("\nKth largesst : %d\n", arr[n - k]);
        printf("\nComparisions : %d\n", comp);
        printf("Swaps : %d\n", swaps);
        swaps = 0;
        comp = 0;
    }
}
