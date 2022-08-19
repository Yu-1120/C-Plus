//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>

int main() {

    char *a[] = {"It's", "C Plus", "wecat"};
    //指针的数组的，就是每个元素是char*

    char **pa = a;
    //*pa的*告诉我们它是指针，指向的类型是char*


    pa++;
    //指向第二个是‘a’的地址
    printf("%s\n", *pa);//"at"

    return 0;

}