#include <stdio.h>
int comp = 0, swaps = 0;
void insertionSort(int arr[], int n)
{
      int j, key;
      for (int i = 1; i < n; i++)
      {
            comp++;
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                  arr[j + 1] = arr[j];
                  j = j - 1;
                  swaps++;
            }
            arr[j + 1] = key;
      }
}
void main()
{
      int n, t;
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
            insertionSort(arr, n);
            printf("\nSorted array is : \n");
            for (int i = 0; i < n; i++)
            {
                  printf("%d ", arr[i]);
            }
            printf("\n");
            printf("\nComparisions : %d\n", comp);
            printf("Swaps : %d\n", swaps);
            swaps = 0;
            comp = 0;
      }
}
