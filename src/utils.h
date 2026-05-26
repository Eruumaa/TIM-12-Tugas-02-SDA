#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 3000
#define MAX_WORD_LEN 100
#define DISPLAY_COUNT 10
#define DATA_SIZE 1000

// ADVANCE SORTING
int loadData(char *arr[], const char *filename);
void freeData(char *arr[], int size);
void shuffleWords(char *arr[], int size);
void displayWords(char *arr[], int size, int limit);

// BASIC SORTING
void generateData(int arr[], int size);
void shuffleNumbers(int arr[], int size);
void displayNumbers(int arr[], int size, int count);

// UMUM
void printExecutionTime(clock_t start, clock_t end);

#endif