
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXSIZE 20

void initArr(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 20;
    }
}

//统一调用接口
void PrintfSort(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n------------------\n");
}

//统一调用接口
//****************************************
void InsertSort(int array[], int length) {
    int h = 4;
    while (h >= 1) {
        for (int i = h; i < length; i++) {
            for (int j = i; j >= h && array[j] < array[j - h]; j -= h/*j--*/) {
                int temp = array[j];
                array[j] = array[j - h];
                array[j - h] = temp;
            }
        }
        h /= 2;
    }
}

int main() {

    srand((unsigned int) time(NULL));
    int array[MAXSIZE];
    initArr(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);

    InsertSort(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);
//    system("pause");
    return 0;
}
