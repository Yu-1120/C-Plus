//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>


struct Test {
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
} *p = (struct Test *) 0x100000;  //4+1+2+1+2=10

//假设p 的值为0x100000.如下表表达式的值分别为多少？
//已知，结构体Test类型变量大小是20个字节！！！  4*5=20
int main() {
    //这道题目我们需要注意的是，对于一个类型加一减一就是加上或减去它本身类型的大小，
    // 这一点在指针里面尤其重要.所以可以分析一下
    printf("%p\n", p + 0x1);//跳过一个结构体大小
    //0x100000+20-->0x100014
    printf("%p\n", (unsigned long) p + 0x1); //long类型是16个字节的
    //转换成无符号长整型，1,048,576+1-->1,048,577
    //0x100001
    printf("%p\n", (unsigned int *) p + 0x1);
    //跳过4个字节  0x100000+4-->0x100004
    return 0;
}

