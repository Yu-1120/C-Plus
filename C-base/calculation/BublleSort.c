
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
void BubbleSort(int array[], int length) {
    int flag = 1;//优化
    while (length-- && flag/*y优化*/) {
        flag = 0;
        for (size_t i = 0; i < length; i++) //下一个位置的值小于当前的值就交换
        {
            if (array[i + 1] < array[i]) {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                flag = 1;/*y优化*/
            }
        }

    }
}

int main() {

    srand((unsigned int) time(NULL));
    int array[MAXSIZE];
    initArr(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);

    BubbleSort(array, MAXSIZE);
    PrintfSort(array, MAXSIZE);
    system("pause");
    return 0;
}
