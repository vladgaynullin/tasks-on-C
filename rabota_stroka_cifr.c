#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;
    int i = 0;
    int size = 1;
    int *data;
    int *baza;
    // int max = 0;
    // int min = 0;
    data = malloc(sizeof(int)*size);

    while (num != -1) {
        if((scanf("%d", &num) == 0) || num < -1 ) {
            printf("n/a");
            free(data);
            return 0;
        }

        data = realloc(data, sizeof(int)*size);
        if(num == -1) { break; }
        data[i] = num;

        // поиск ячеек с макс или мин значением
        // max = (data[i] > data[max]) ? i:max;
        // min = (data[i] < data[min]) ? i:min;

        i++;

    }

    // смена внутренностей ячеек макс и мин
    // int tmp = data[max];
    // data[max] = data[min];
    // data[min] = tmp;

    // печать мин на экран
    // printf("%d", data[min]);


    // сумма четных чисел
    // int sum = 0;
    //     for (int n = 0; n < i; n++) {
    //         if (data[n]%2 == 0)
    //             sum += data[n];
    //     }
    //     printf("%d", sum);


    // по порядку 
    // for (int n = 0; n < i; n++) 
    // printf((n == i-1) ? "%d":"%d ", data[n]);


    // в обратном порядке
    // for (int n = i-1; n >= 0; n--)
    // printf((n == 0) ? "%d":"%d ", data [n]);


    free(data);
}


