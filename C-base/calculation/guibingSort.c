
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXSIZE 10

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

//ͳһ���ýӿ�
void PrintfSort(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n------------------\n");
}

//ͳһ���ýӿ�
//***************��Ӧ˳��洢*************************
void guibingSort(int array[], int alen, int array1[], int blen, int *temp/*һ��ŵ�temp����ȥ*/) {
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < alen && j < blen) {
        if (array[i] < array1[j]) {
            temp[k] = array[i];
            k++;
            i++;
        } else {
            temp[k] = array1[j];
            k++;
            j++;
        }
    }
    //��ʣ�·ŵ�temp����ȥ
    while (i < alen) {
        temp[k] = array[i];
        k++;
        i++;

    }
    while (j < blen) {
        temp[k] = array1[j];
        k++;
        j++;
    }

}

int main() {

    //**********ֻ�ʺ��Ѿ�����õ�����****************
    int array[4] = {2, 4, 8, 10};
    int array1[4] = {1, 3, 5, 7};
    //**************************
    int temp[8] = {};
    guibingSort(array, sizeof(array) / sizeof(array[0]), array1, sizeof(array1) / sizeof(array1[0]), temp);
    PrintfSort(temp, 8);
//    system("pause");
    return 0;
}
