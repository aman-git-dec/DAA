#include <stdio.h>
void main()
{
      int key, n, flag = 0, T;
      printf("Enter no. of test cases : ");
      scanf("%d", &T);
      for (int t = 0; t < T; t++)
      {
            printf("Enter size : ");
            scanf("%d", &n);
            int a[n];
            printf("Enter key element : ");
            scanf("%d", &key);
            printf("Enter elements : ");
            for (int i = 0; i < n; i++)
            {
                  scanf("%d", &a[i]);
            }
            for (int i = 0; i < n; i++)
            {
                  for (int j = 0; j < n; j++)
                  {
                        if ((a[i] - a[j]) == key)
                        {
                              flag++;
                        }
                  }
            }
            if (flag == 0)
                  printf("No sequence found");
            else
                  printf("The no. of pairs found are : %d\n", flag);
            flag = 0;
      }
}
