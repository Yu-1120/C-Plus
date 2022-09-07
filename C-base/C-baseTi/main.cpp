#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
int two_ti()
{

    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&a + 1);
    printf("%d\n", ptr);                   //地址
    printf("%d\n", *(ptr));                //越界了
    printf("%d,%d", *(a + 1), *(ptr - 1)); // 2  5（最后一个元素）
}
struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
} *p = (struct Test *)0x100000; // 4+1+2+1+2=10
int three_ti()
{

    //这道题目我们需要注意的是，对于一个类型加一减一就是加上或减去它本身类型的大小，
    // 这一点在指针里面尤其重要.所以可以分析一下
    printf("%p\n", p + 0x1); //跳过一个结构体大小
    // 0x100000+20-->0x100014
    printf("%p\n", (unsigned long)p + 0x1); // long类型是16个字节的
    //转换成无符号长整型，1,048,576+1-->1,048,577
    // 0x100001
    printf("%p\n", (unsigned int *)p + 0x1);
    //跳过4个字节  0x100000+4-->0x100004
    return 0;
}
int four_ti()
{
    int a[3][2] = {(0, 1), (2, 3), (4, 5)};
    //注意里面小括号是一个运算符，会计算里面的值,{1,3,5}

    /*
     * 1   3
     * 5   0
     * 0   0
     表示要算括起来的整个表达式的值，
      所以(0,1)的值就是1(注意逗号表达式的值是逗号分隔的最后一个值)，(2,3)的值就是3，因此这条语句就变成了
    */
    int *p;

    p = a[0];
    printf("%d\n", a[1][0]);
    printf("%d\n", p[0]);

    getchar(); //防止程序闪退
}
int four_ti()
{
    int a[5][5] = {0};

    int(*p)[4];

    p = (int(*)[4])a;

    printf("%d\n", &p[4][2]);
    printf("%d\n", &a[4][2]);
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //这个是指针的地址   地址      18-22=-4
    //把二维数组强制类型转换成(*p)[4]的过程就是把数组a所在的内存数据看成是行指针所指数据，
    // 换句话说就是直接把p指向了a的区域（事实上强制转换什么都没做）
    //其实就是差了一个int的字节
    //--------------------------------
    //%p是打印地址（指针地址）的，是十六进制的形式，但是会全部打完，即有多少位打印多少位。
    //--------------------------------
    int b[2];
    printf("%d", &b[1] - &b[0]); // 1
}
int six_ti()
{
    int aa[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr1 = (int *)(&aa + 1);   //这里ptr1-->&aa[3][0]
    int *ptr2 = (int *)(*(aa + 1)); // aa表示首地址，对于二维数组就是第一行地址
    //所以*(aa+1)再转化成int*就是aa[1][0],也可以理解为*(aa+1)=aa[1]
    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); // 10,5
}
int seven_ti()
{

    char *a[] = {"It's", "C Plus", "wecat"};
    //指针的数组的，就是每个元素是char*

    char **pa = a;
    //*pa的*告诉我们它是指针，指向的类型是char*

    pa++;
    //指向第二个是‘a’的地址
    printf("%s\n", *pa); //"at"
}
int eight()
{

    char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};

    char **cp[] = {c + 3, c + 2, c + 1, c};

    char ***cpp = cp;

    printf("%s\n", **++cpp);
    //注意++是有副作用的，++cpp这时应该指向C+2的地址，第一次解引用
    //得到C+2，再解引用得到”P”的地址，所以应为”POINT”

    printf("%s\n", *--*++cpp + 3);
    // cpp自++，这时应该指向C+1，解引用得到C+1，再一，改变了Cpp
    //中的C+1为C,再次解引用得到"E"的地址，再+3指向“ENTER”中第二个“E”的地址
    //所以应为“ER”

    printf("%s\n", *cpp[-2] + 3);
    //*cpp[-2]-->**（cpp-2），指向C+3解引用两次得到“F”的地址，再加三
    //得到”s”的地址，所以应为”ST”

    printf("%s\n", cpp[-1][-1] + 1);
    // cpp[-1][-1]->*（*（cpp1）-1），第一次得到C+2的地址，
    //再减-C+2变成C+1，再解引用，得到“N"的地址，然后+1得到“NEW中E的地址，
    //所以应为“EW“

    getchar();
}

#define decode(p, r, i, n, t, f) r##f##r##i##t##p
#define puts decode(m, s, t, o, e, y)
int danger() //一个有趣的C代码 (竟然还有声音。。。)
             /*
             以上代码需要C编译器至少支持C99标准，因为用到了C99新增的语法复合字面量，否则编译不一定通过。
             其实真正有效果的也只是Windows吧，Linux和Mac OS除非是root权限才会有效果，
             这是不是也说明了在默认安全权限方面Linux和Mac OS要比Windows更安全些呢？
             */
{
    double ID[] = {1.3553894309652565e+224, 1.0805197184392210e-081,
                   7.2746636873724370e+199, 6.9524391087699090e-308};
    // return puts((char*)ID);//放开注释运行很危险 不要放开运行很危险
    getchar();
    return 0;
}
int main()
{
    four_ti();
    return 0;
}