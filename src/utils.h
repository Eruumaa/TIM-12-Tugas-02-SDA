#define MAX_WORDS 3000
#define MAX_WORD_LEN 100
#define DISPLAY_COUNT 20

int loadData(char *arr[], const char *filename);
void freeData(char *arr[], int size);
void shuffleData(char *arr[], int size);
void displayData(char *arr[], int size, int limit);
void printExecutionTime(clock_t start, clock_t end);
#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATA_SIZE 1000
#define DISPLAY_COUNT 10

// Generate 1000 data integer random
void generateData(int arr[], int size);

// Shuffle data sebelum sorting
void shuffleData(int arr[], int size);

// Tampil N data pertama
void displayData(int arr[], int size, int count);

// Hitung dan tampilkan waktu eksekusi
void printExecutionTime(clock_t start, clock_t end);

#endif
