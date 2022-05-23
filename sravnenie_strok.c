#include <stdio.h>
#include <string.h>
// Даны две строки. Необходимо сравнить строки между собой без учёта регистра символов.
int main() {
    char str1[60];
    char str2[60];
    int l1, l2;
    int k, j = 0;
    fgets(str1, 60, stdin);
    fgets(str2, 60, stdin);
    l1 = strlen(str1);
    l2 = strlen(str2);
    for (int i = 0; i < l2; i++) {
    k = str1[i]-str2[i];

    if ((!(k == 0 || k == 32 || k == -32)) || l1 != l2)
        j++;
    }
    if (j == 0)
        printf("yes");
    else
        printf("no");
    return 0;
}