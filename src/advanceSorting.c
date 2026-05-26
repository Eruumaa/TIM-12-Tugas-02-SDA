#include <stdio.h>      // library input output
#include <stdlib.h>     // library fungsi umum
#include <string.h>     // library string

// Merge Sort
void merge(char *arr[], int left, int mid, int right) { // fungsi menggabungkan array
    int i, j, k;
    int n1 = mid - left + 1; // ukuran array kiri
    int n2 = right - mid;    // ukuran array kanan

    char *leftArr[n1], *rightArr[n2]; // array sementara

    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i]; // copy array kiri

    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j]; // copy array kanan

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) { // membandingkan data kiri dan kanan

        if (strcmp(leftArr[i], rightArr[j]) <= 0) { // urut alfabet
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }

        k++;
    }

    while (i < n1) { // sisa array kiri
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) { // sisa array kanan
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(char *arr[], int left, int right) { // fungsi utama merge sort

    if (left < right) { // jika array masih bisa dibagi

        int mid = left + (right - left) / 2; // mencari titik tengah

        mergeSort(arr, left, mid); // sorting bagian kiri
        mergeSort(arr, mid + 1, right); // sorting bagian kanan

        merge(arr, left, mid, right); // gabungkan hasil sorting
    }
}

// QuickSort
void swap(char **a, char **b) { // fungsi menukar data
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int partition(char *arr[], int low, int high) { // fungsi partition

    char *p = arr[low]; // pivot diambil dari data pertama

    int i = low;
    int j = high;

    while (i < j) {

        while (strcmp(arr[i], p) <= 0 && i <= high - 1) { // cari data lebih besar dari pivot
            i++;
        }

        while (strcmp(arr[j], p) > 0 && j >= low + 1) { // cari data lebih kecil dari pivot
            j--;
        }

        if (i < j) {
            swap(&arr[i], &arr[j]); // tukar data
        }
    }

    swap(&arr[low], &arr[j]); // tukar pivot
    return j; // kembalikan posisi pivot
}

void quickSort(char *arr[], int low, int high) { // fungsi utama quick sort

    if (low < high) {

        int pi = partition(arr, low, high); // menentukan pivot

        quickSort(arr, low, pi - 1); // sorting kiri
        quickSort(arr, pi + 1, high); // sorting kanan
    }
}

// Shell Sort
void shellSort(char *arr[], int n) { // fungsi shell sort

    for (int interval = n / 2; interval > 0; interval /= 2) { // menentukan gap

        for (int i = interval; i < n; i += 1) {

            char *temp = arr[i];
            int j = i;

            while (j >= interval && strcmp(arr[j - interval], temp) > 0) { // membandingkan data
                arr[j] = arr[j - interval];
                j -= interval;
            }

            arr[j] = temp;
        }
    }
}

void printArray(char *arr[], int size) { // fungsi menampilkan array

    for (int i = 0; i < size; ++i) {
        printf("%s ", arr[i]); // tampilkan data
    }

    printf("\n");
}