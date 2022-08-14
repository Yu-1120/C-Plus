#include <iostream>
#include <stdio.h>

using namespace std;

//统一调用接口
void PrintfSort(int array[], int arrayNum, void (*pFunc)(int[], int)) {
    pFunc(array, arrayNum);
    for (int i = 0; i < arrayNum; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//****************************************
void BubbleSort(int array[], int arrayNum) {

    for (int i = 0; i < arrayNum; i++) //给每一个元素一次机会
    {
        int flag = 0;
        for (int j = 0; j < arrayNum - i - 1; i++) /*1.为什么要减法，把最大的排上去，就少掉一个，少排一次序，2，下面做了j+1*/
        {
            if (array[j] > array[j + 1]) //从小到大
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1; //发生交换，改变flag值
            }
            if (flag == 0 && j == arrayNum - i - 1) {
                return; //如果内层循环一次结束都没有发生交换，说明已经排好顺序了，减少排序趟数
            }
        }
    }

} // j

//*******************冒泡排序*********************
//*******************选择排序*********************
void SelectSort(int array[], int arrayNum) {

    for (int i = 0; i < arrayNum; i++) {
        int minIndex = i;
        for (int j = 0; j < arrayNum; i++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

//*******************选择排序*********************
template<typename T>
int count(T &n) {
    int s1 = sizeof(n);
    int s2 = sizeof(n[0]);
    return s1 / s2;
}

int main() {
    // void (*p)(int array[], int arrayNum) = NULL; //这个是函数指针传到上面的selectSort,把形参名去掉放上去去
    int array[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10, 100};

    // cout << count(array) << endl; //
    // PrintfSort(array, count(array), BubbleSort);
    PrintfSort(array, 10, SelectSort);

    return 0;
}
