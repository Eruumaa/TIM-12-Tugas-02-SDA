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
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            char *temp[dataSize];
            for (int i = 0; i < dataSize; i++) {
                temp[i] = data[i];
            }

            shuffleData(temp, data);
            printf("\nData sebelum sorting (%d data pertama):\n", DISPLAY_COUNT);
            
            displayData(temp, data, DISPLAY_COUNT);

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

            printf("Data setelah sorting (%d data pertama):\n", DISPLAY_COUNT);

            displayData(temp, dataSize, DISPLAY_COUNT);
            printExecutionTime(start, end);

        } else if (choice == 4) {
            break;
        } else {
            printf("Pilihan tidak valid!\n");
        }

    } while (1);
}

int main () {
    srand(time(NULL));

    printf("Memasukkan data\n");
    
    dataSize = loadDataset(data, "Words.txt");

    if (dataSize == NULL) {
        printf("Program berhenti, karena data NULL\n");
        return 1;
    }
    printf("Berhasil memuat %d kata!\n", dataSize);

    int choose;
    do {
        printf("\n===== MENU UTAMA =====\n");
        printf("1. Sorting Dasar\n");
        printf("2. Advance Sorting\n");
        printf("3. Keluar\n");
        printf("Pilih menu : ");
        scanf("%d", &choose);

        switch (choose) {
            case 1: printf("done\n"); break;
            case 2: menuAdvanceSorting(); break;
            case 3: printf("Keluar dari program.\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }
    } while (choose != 3);

    freeData(data, dataSize);

    return 0;
}