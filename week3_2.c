#include <stdio.h>
int comp = 0, swaps = 0;
void swap(int arr[], int min, int i)
{
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
}
void selectionSort(int arr[], int n)
{
      for (int i = 0; i < n - 1; i++)
      {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                  comp++;
                  if (arr[j] < arr[min])
                  {
                        min = j;
                  }
            }
            if (min != i)
            {
                  swap(arr, min, i);
                  swaps++;
            }
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
            selectionSort(arr, n);
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
