#include <stdio.h>

void right_shift(int arr[], int size) {
    int last = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}
int main() {
    int vector[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(vector) / sizeof(vector[0]);

    printf("Initial vector: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    right_shift(vector, size);

    printf("Vector after shift: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}