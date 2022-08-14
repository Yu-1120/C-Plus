//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>

int main() {

    char *a[] = {"It's", "C Plus", "wecat"};

    char **pa = a;

    pa++;

    printf("%s\n", *pa);

    return 0;

}