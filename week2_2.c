#include <stdio.h>
void main()
{
      int i, j, k, n, flag = 0, T;
      printf("Enter no. of test cases : ");
      scanf("%d", &T);
      for (i = 0; i < T; i++)
      {
            printf("Enter size : ");
            scanf("%d", &n);
            int a[n];
            printf("Enter elements : ");
            for (i = 0; i < n; i++)
            {
                  scanf("%d", &a[i]);
            }
            for (i = 0; i < n; i++)
            {
                  for (j = i + 1; j < n; j++)
                  {
                        k = j + 1;
                        if (a[i] + a[j] == a[k])
                        {
                              printf("\n");
                              printf("%d %d %d", i + 1, j + 1, k + 1);
                              flag++;
                        }
                  }
            }
            if (flag == 0)
                  printf("No sequence found");
      }
}
