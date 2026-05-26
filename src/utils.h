#define MAX_WORDS 3000
#define MAX_WORD_LEN 100
#define DISPLAY_COUNT 20

int loadData(char *arr[], const char *filename);
void freeData(char *arr[], int size);
void shuffleData(char *arr[], int size);
void displayData(char *arr[], int size, int limit);
void printExecutionTime(clock_t start, clock_t end);