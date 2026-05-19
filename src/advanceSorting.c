#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Merge Sort
void merge (char *arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char *leftArr[n1], *rightArr[n2];

    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (strcmp(leftArr[i], rightArr[j]) <= 0) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort (char *arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// QuickSort*
void swap (char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int partition (char *arr[], int low, int high) {
    char *p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (strcmp(arr[i], p) <= 0 && i <= high - 1) {
            i++;
        }
        while (strcmp(arr[j] , p) > 0 && j >= low +1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort (char *arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Shell Sort
void shellSort (char *arr[], int n) {
    for (int interval = n / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < n; i+= 1) {
            char *temp = arr[i];
            int j;

            for (j = i; j >= interval && strcmp(arr[j - interval], temp) > 0; j -= interval) {
                arr[j] = arr[j - interval];
            }
            arr[j] = temp;
        }
    }
}

void printArray(char *arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}