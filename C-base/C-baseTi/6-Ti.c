//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>

int main() {

    int aa[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr1 = (int *) (&aa + 1);//这里ptr1-->&aa[3][0]
    int *ptr2 = (int *) (*(aa + 1));//aa表示首地址，对于二维数组就是第一行地址
    //所以*(aa+1)再转化成int*就是aa[1][0],也可以理解为*(aa+1)=aa[1]
    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
    return 0;


}