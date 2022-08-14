//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>

int main() {

    int a[5][5] = {0};

    int(*p)[4];

    p = (int (*)[4]) a;

    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

    return 0;

}

