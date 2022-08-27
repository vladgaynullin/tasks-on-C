#include <stdio.h>
#include <stdlib.h>

// инвертированно и перевернуто
int main() {

    int n;
    int count = 1;
    scanf("%d", &n);
    int data[n][n];

    // вывод инвертированно
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {
        data[i][j] = count;
        count++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = n-1; j >= 0; j--) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }


//     // вывод задом наперед
//     count = n*n;
//     for (int i = 0; i<n; i++) {
//         for (int j = 0; j < n; j++) {
//             data[i][j] = count;
//             printf("%d ", count);
//             count--;
//         }
//         printf("\n");
//     }


//     return 0;
// }

// смена строк с макс и мин значениями
// int main() {
//     int m, n;
//     int maxX = 0, maxY = 0, minX = 0, minY = 0;

//     scanf("%d%d", &m, &n);
//     int data[m][n];

//     for (int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             scanf("%d", &data[i][j]);
//             if (data[i][j] > data[maxX][maxY]) { maxX = i; maxY = j;}
//             if (data[i][j] < data[minX][minY]) { minX = i; minY = j;}
//         }
//     }


//     for (int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//         if (i == maxX) { printf((j == n-1) ? "%d" : "%d ", data[minX][j]); } else
//         if (i == minX) { printf((j == n-1) ? "%d" : "%d ", data[maxX][j]); } else
//         { printf((j == n-1) ? "%d" : "%d ", data[i][j]); } 
//         }
//         printf("\n");
//     }
}