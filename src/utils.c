#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "utils.h"

int loadData (char *arr[], const char *filename) {
    FILE * file = fopen(filename, "r");
    if (file == NULL) {
        printf("Gagal membuka file data: %s\n", filename);
        return 0;
    }

    char buffer[MAX_WORD_LEN];
    int count = 0;

    while (fscanf(file, "%99s", buffer) == 1 && count < MAX_WORDS) {
        arr[count] = malloc(strlen(buffer)+1);
        strcpy(arr[count], buffer);
        count++;
    }
    fclose(file);
    return count;
}

void freeData(char *arr[], int size) {
    for (int i = 0; i < size; i++) {
        free(arr[i]);
    }
}

void shuffleData(char *arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char *temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void displayData(char *arr[], int size, int limit) {
    int n = (size < limit) ? size : limit;
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n\n");
}

void printExecutionTime(clock_t start, clock_t end) {
    double time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Waktu eksekusi sorting: %f detik\n", time);
}