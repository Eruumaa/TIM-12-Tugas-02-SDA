#include "utils.h"

void generateData(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10000 + 1; // random 1 - 10000
    }
}

void shuffleData(int arr[], int size) {
    srand(time(NULL));
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // swap
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void displayData(int arr[], int size, int count) {
    if (count > size) count = size;
    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i < count - 1) printf(", ");
    }
    printf("\n");
}

void printExecutionTime(clock_t start, clock_t end) {
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Waktu eksekusi : %.6f detik\n", time_taken);
}