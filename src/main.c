#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include "basic_sorting.h"

void menuSortingDasar() {
    int arr[DATA_SIZE];
    generateData(arr, DATA_SIZE);

    int pilihan;
    do {
        printf("\n===== SORTING DASAR =====\n");
        printf("1. Bubble Sort\n");
        printf("2. Insertion Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Kembali\n");
        printf("Pilih metode : ");
        if (scanf("%d", &pilihan) != 1) {
            printf("Input tidak valid!\n");
            while (getchar() != '\n'); // bersihkan buffer
            pilihan = 0;
            continue;
        }

        if (pilihan >= 1 && pilihan <= 3) {
            int temp[DATA_SIZE];
            for (int i = 0; i < DATA_SIZE; i++) temp[i] = arr[i];

            shuffleData(temp, DATA_SIZE);
            printf("\nData sebelum sorting (%d data pertama):\n", DISPLAY_COUNT);
            displayData(temp, DATA_SIZE, DISPLAY_COUNT);

            clock_t start = clock();
            if (pilihan == 1) bubbleSort(temp, DATA_SIZE);
            else if (pilihan == 2) insertionSort(temp, DATA_SIZE);
            else if (pilihan == 3) selectionSort(temp, DATA_SIZE);
            clock_t end = clock();

            printf("Data setelah sorting (%d data pertama):\n", DISPLAY_COUNT);
            displayData(temp, DATA_SIZE, DISPLAY_COUNT);
            printExecutionTime(start, end);

        } else if (pilihan == 4) {
            break;
        } else {
            printf("Pilihan tidak valid!\n");
        }

    } while (1);
}

int main() {
    int pilihan;
    do {
        printf("\n===== MENU UTAMA =====\n");
        printf("1. Sorting Dasar\n");
        printf("2. Advance Sorting\n");
        printf("3. Keluar\n");
        printf("Pilih menu : ");
        if (scanf("%d", &pilihan) != 1) {
            printf("Input tidak valid!\n");
            while (getchar() != '\n'); // bersihkan buffer
            pilihan = 0;
            continue;
        }

        switch (pilihan) {
            case 1: menuSortingDasar(); break;
            case 2: printf("sabar ya ges lg di buat ama aqil\n"); break;
            case 3: printf("Keluar dari program.\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 3);

    return 0;
}