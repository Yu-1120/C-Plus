//
// Created by 11868 on 2021/8/13.
//
#include<stdio.h>

int main() {

    char a[20] = {"You_are_a_girl"};

    printf("%s\n", a);

    int *ptr = (int *) a;
    printf("%c\n", *ptr);//Y
/***

** 吾日三醒指针：指针的类型，指针指向的类型，指针指向哪里

** ptr 的类型是 int* ， 指向的类型是 int , 指向 arr

***/
    ptr += 2;//int*2=4*2=8从第8个开始
    printf("%c\n", *ptr);//a
    *ptr = 'abcd';//修改了第8个后的4个的值

    for (int i = 0; i < 20; i++) {
//        printf("%c\n", *ptr);
        printf("%c", a[i]); //You_are_dcbarl

    }

    getchar();

}