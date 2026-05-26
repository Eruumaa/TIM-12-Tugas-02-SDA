#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "advanceSorting.h"
#include "utils.h"

char *data[MAX_WORDS];
int dataSize = 0;

void menuAdvanceSorting() {

    int choice;
    do {
        printf("\n===== ADVANCE SORTING =====\n");
        printf("1. Merge Sort\n");
        printf("2. Quick Sort\n");
        printf("3. Shell Sort\n");
        printf("4. Kembali\n");
        printf("Pilih metode : ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Input harus angka\n");

            while (getchar() != '\n');
            continue;
        }

        if (choice >= 1 && choice <= 3) {
            char *temp[dataSize];
            for (int i = 0; i < dataSize; i++) {
                temp[i] = data[i];
            }

            shuffleData(temp, dataSize);
            printf("\n %d Data sebelum sorting :\n", DISPLAY_COUNT);
            
            displayData(temp, dataSize, DISPLAY_COUNT);

            clock_t start = clock();

            if (choice == 1) {
                mergeSort(temp, 0, dataSize - 1);
            }
            else if (choice == 2) {
                quickSort(temp, 0, dataSize - 1);
            }
            else if (choice == 3) {
                shellSort(temp, dataSize);
            }
            
            clock_t end = clock();

            printf("%d Data setelah sorting:\n", DISPLAY_COUNT);

            displayData(temp, dataSize, DISPLAY_COUNT);
            printExecutionTime(start, end);

        } else if (choice == 4) {
            break;
        } else {
            printf("Pilihan tidak valid\n");
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

int main () {
    srand(time(NULL));

    printf("Memasukkan data\n");
    
    dataSize = loadData(data, "data/Words.txt");

    if (dataSize == 0) {
        printf("Program berhenti, karena data NULL\n");
        return 1;
    }
    printf("Berhasil memuat %d kata\n", dataSize);

    int choose;
int main() {
    int pilihan;
    do {
        printf("\n===== MENU UTAMA =====\n");
        printf("1. Sorting Dasar\n");
        printf("2. Advance Sorting\n");
        printf("3. Keluar\n");
        printf("Pilih menu : ");

        if (scanf("%d", &choose) != 1) {
            printf("Input harus angka\n");

            while (getchar() != '\n');
            continue;
        }

        switch (choose) {
            case 1: printf("done\n"); break;
            case 2: menuAdvanceSorting(); break;
            case 3: printf("Keluar dari program.\n"); break;
            default: printf("Pilihan tidak valid\n");
        }
    } while (choose != 3);

    freeData(data, dataSize);
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