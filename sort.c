#include <stdio.h>
#include <stdlib.h>

int input(int *a, int n);
void output(int *a, int n);
void sort(int *a, int n);

int main() {
    int n;
    int *block = NULL;
    if (scanf("%d", &n) == 1) {
    block = (int*) malloc(n * sizeof(int));
    if (input(block, n) == 1) {
        sort(block, n);
        output(block, n);
    }
    } else {
        printf("n/a");
    }
    free(block);
    return 0;
}

int input(int *a, int n) {
    int retura = 1;
    int retura2 = 1;
    char abc = ' ';
    for (int i = 0; i < n; i++) {
          if (scanf("%d", &a[i]) != 1) {
              printf("n/a");
              retura = 0;
              retura2 = 2;
              break;
        }
    }
    scanf("%c", &abc);
    if (retura2 == 1 && abc != '\n') {
        printf("n/a");
        retura = 0;
    }
    return retura;
}

void sort(int *a, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void output(int *a, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}



