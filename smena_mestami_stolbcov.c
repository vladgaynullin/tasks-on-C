#include <stdio.h>
// Поменять местами столбцы с минимальной и максимальной суммой элементов.
int main() {
   int m, n, min_sum = 1000, max_sum = -1000, sum = 0, min = 0, max = 0;
   scanf("%d %d", &m, &n);
   int a[m][n];

   for(int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   for(int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         sum += a[j][i];
      }
      if (sum < min_sum) {
         min_sum = sum;
         min = i;
      }
      if (sum > max_sum) {
         max_sum = sum;
         max = i;
      }
      sum = 0;
   }   

   for(int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if (j == min) {
            printf("%d ", a[i][max]); continue;
         }
         if (j == max) {
            printf("%d ", a[i][min]); continue;
         }
         printf("%d ", a[i][j]);
      }
      printf("\n");
   }

   return 0;
}  