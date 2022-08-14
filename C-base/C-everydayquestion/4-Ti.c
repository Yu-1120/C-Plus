//
// Created by 11868 on 2022/8/13.
//
#include <stdio.h>

int main(int argc, char *argv[]) {

    int a[3][2] = {(0, 1), (2, 3), (4, 5)};

    int *p;

    p = a[0];

    printf("%d", p[0]);

    getchar();//·ÀÖ¹³ÌĞòÉÁÍË

    return 0;

}