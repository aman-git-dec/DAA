#include <stdio.h>
#include <time.h>
int s = 0, c = 0;
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1, temp;
    for (int j = l; j < r; j++)
    {
        c++;
        if (arr[j] <= pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            s++;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;
    s++;
    return (i + 1);
}
void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}

void main()
{
    int T, n;
    printf("Enter number of test cases : ");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        printf("Enter size of array : ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter elements of array : ");
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &arr[k]);
        }
        srand(time(NULL));
        quickSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\nComparisions : %d\n", c);
        printf("Swaps : %d", s);
        c = 0;
        s = 0;
    }
}
