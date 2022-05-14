#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int a[100], k = 0, median, cnt = 0;
    float sum = 0;
    FILE *F;
    F = fopen(argv[1], "r");
    for(int i = 0; !feof(F); i++) {
        if (fscanf(F, "%d", &a[i]) == 1) {
            sum += a[i];
        }
        k = i;
    }

    for (int i = 0; i < k-1; i++) {
        for (int j = (k-1); j > i; j--) {
            if (a[j-1] > a[j]) {
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }

    if (k%2 == 0) {
        median = (a[k/2]+a[k/2-1])/2+0.5;
    } else {
        median = (k-1)/2;
    }

    for(int i=0; i < k; i++) {
        while (a[i] != median) {
            if (a[i] < median) {
                a[i]++;
            }
            if (a[i] > median) {
                a[i]--;
            }
            cnt++;
        }
    }
    printf("%d", cnt);
    fclose(F);
	return 0;
}