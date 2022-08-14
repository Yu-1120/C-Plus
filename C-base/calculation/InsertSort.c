
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXSIZE 10

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
//*******************冒泡排序*********************
void InsertSort(int array[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i; j >= 1 && array[j] < array[j - 1]; j--) {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
        }
    }
}

int main() {

    srand((unsigned int) time(NULL));
    int array[MAXSIZE];
    initArr(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);

    InsertSort(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);
    system("pause");
    return 0;
}
