#include <stdio.h>

int firstOccurance(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, t, key;
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
        printf("Enter key element : ");
        scanf("%d", &key);
        int f = firstOccurance(arr, n, key);
        int l = lastOccurance(arr, n, key);
        int total = (f != -1 && l != -1) ? (l - f + 1) : 0;
        printf("Number of occurances of key element : %d", total);
    }
    return 0;
}
