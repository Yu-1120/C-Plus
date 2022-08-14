
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
//****************************************
void SelectSort(int array[], int length) {
    for (size_t i = 0; i < length; i++) {
        int k = i;
        for (int j = i + 1; j < length; j++) {
            if (array[j] < array[k])
                k = j;
        }
        int temp = array[i];
        array[i] = array[k];
        array[k] = temp;
    }
}

int main() {

    srand((unsigned int) time(NULL));
    int array[MAXSIZE];
    initArr(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);

    SelectSort(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);
//    system("pause");
    return 0;
}
