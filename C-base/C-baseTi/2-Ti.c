//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>

int main() {

    int a[5] = {1, 2, 3, 4, 5};

    int *ptr = (int *) (&a + 1);
    printf("%d\n", ptr);
    printf("%d\n", *(ptr));//Խ����
    printf("%d,%d", *(a + 1), *(ptr - 1)); // 2  5�����һ��Ԫ�أ�


    return 0;

}

