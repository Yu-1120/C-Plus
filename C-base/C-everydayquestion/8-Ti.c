//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>
#include <stdio.h>

int main() {

    char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};

    char **cp[] = {c + 3, c + 2, c + 1, c};

    char ***cpp = cp;

    printf("%s\n", **++cpp);

    printf("%s\n", *--*++cpp + 3);

    printf("%s\n", *cpp[-2] + 3);

    printf("%s\n", cpp[-1][-1] + 1);

    getchar();

    return 0;

}

