#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
    float x, y, r, a, b, okr, r2;
    double eps = 1e-5;
    FILE *F[2];
    F[1] = fopen(argv[1], "r");
    fscanf(F[1], "%f %f %f", &x, &y, &r);
    F[2] = fopen(argv[2], "r");
    while(!feof(F[2])) {
        if (fscanf(F[2], "%f %f", &a, &b) == 2) {
            okr = (a-x)*(a-x) + (b-y)*(b-y);
            r2 = r*r;
            if (fabs(okr-r2) < eps) {
                printf("0\n");
            }
            else if (okr < r2) {
                printf("1\n");
            }
            else {
                printf("2\n");
            }
        }
    }
    fclose(F[1]);
    fclose(F[2]);
	return 0;
}