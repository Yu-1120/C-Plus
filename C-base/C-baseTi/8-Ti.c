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
    //注意++是有副作用的，++cpp这时应该指向C+2的地址，第一次解引用
    //得到C+2，再解引用得到”P”的地址，所以应为”POINT”

    printf("%s\n", *--*++cpp + 3);
    //cpp自++，这时应该指向C+1，解引用得到C+1，再一，改变了Cpp
    //中的C+1为C,再次解引用得到"E"的地址，再+3指向“ENTER”中第二个“E”的地址
    //所以应为“ER”

    printf("%s\n", *cpp[-2] + 3);
    //*cpp[-2]-->**（cpp-2），指向C+3解引用两次得到“F”的地址，再加三
    //得到”s”的地址，所以应为”ST”

    printf("%s\n", cpp[-1][-1] + 1);
    //cpp[-1][-1]->*（*（cpp1）-1），第一次得到C+2的地址，
    //再减-C+2变成C+1，再解引用，得到“N"的地址，然后+1得到“NEW中E的地址，
    //所以应为“EW“

    getchar();

    return 0;

}

