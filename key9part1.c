#include <stdio.h>
#define NMAX 10
// Принимет на вход длину массива и массив целых чисел.
// В качестве выхода она должна вывести в stdout сумму четных элементов массива и
// новый сформированный массив из элементов старого, на которые делится нацело подсчитанная ранее сумма.
void input(int *buffer, int *length);
void output(int *buffer, int length);
int sum_numbers(int *buffer, int length);
int find_numbers(int *buffer, int length, int number, int* numbers);

int main() {
    int length = NMAX;
    int buffer[NMAX];
    input(buffer, &length);
    output(buffer, length);
}


void input(int *buffer, int *length) {
    scanf("%d", length);
    for (int *p = buffer; p - buffer < *length; p++)
        scanf("%d", p);
}

int sum_numbers(int *buffer, int length) {
    int sum = 0;
        for (int i = 0; i < length; i++) {
            if (buffer[i] % 2 == 0) {
                sum = sum + buffer[i];
            }
}
return sum;
}

int find_numbers(int* buffer, int length, int number, int* numbers) {
    int counter = 0;
        for (int *p = buffer; p - buffer < length; p++) {
            if (*p !=0 && (number%(*p) == 0)) {
                numbers[counter] = *p;
                counter++;
        }
    }
    return counter;
}

void output(int *buffer, int length) {
    int number = sum_numbers(buffer, length);
    int numbers[NMAX];
    int count = find_numbers(buffer, length, number, numbers);
    printf("%d\n", number);
    int *p = numbers;
    for (int i = 0; i < count; i++)
        printf("%d ", *(p+i));
}
