
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXSIZE 1000

int swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void initArr(int array[], int length) {
    for (int i = 0; i < length; i++) {
        array[i] = rand() % 300;
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
//***************适应顺序存储*************************
void quickSort(int array[], int left, int right) {
    if (left > right)
        return;
    int i = left;
    int j = right;
    int pivot = array[i];
    while (i < j) {
        while (i < j && array[j] >= pivot)
            j--;
        array[i] = array[j];
        while (i < j && array[i] <= pivot)
            i++;
        array[j] = array[i];

    }
    array[i] = pivot;
    quickSort(array, left, i - 1);
    quickSort(array, i + 1, right);
}

//***************适用于链表*************************
void quickSort2(int array[], int left, int right) {
    if (left > right)
        return;

    int pivot = array[left];
    int i = left + 1;
    int j = left + 1;
    while (j < right) {
        if (array[j] < pivot) {
            swap(array, i, j);
            i++;

        }
        j++;
    }
    swap(array, left, i - 1);
    quickSort(array, left, i - 1);
    quickSort(array, i, right);
}

int main() {

    srand((unsigned int) time(NULL));
    int array[MAXSIZE];
    initArr(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);
//    quickSort(array, 0, MAXSIZE - 1);
    quickSort2(array, 0, MAXSIZE - 1);
    PrintfSort(array, MAXSIZE);

    system("pause");
    return 0;
}
