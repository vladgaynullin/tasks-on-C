#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i = 1;
    scanf("%d %d", &n, &m);
    while(n == n) {
        printf("%d", i);
        i = 1 + (i+m-2)%n;
        if (i == 1) {
            break;
        }
    }
    return 0;
}