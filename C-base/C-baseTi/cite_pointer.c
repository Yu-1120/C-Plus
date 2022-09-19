#include <stdio.h>
#include <malloc.h>

int hello();

int cite_pointer() {
    //:引用在定义时必须初始化,指针则没有要求(尽量初始化,防止野指针)
    int a = 10;
    int *p1 = &a;
    int
    &p2 = a;
    printf("%d,%d,%d\n", *p1, &p2, p2); //值,地址,值
    return 0;
}

int main() {
    hello();
    return 0;
}

int k1 = 1;
int k2;
static int k3 = 2;
static int k4;

int hello() {
    system("chcp 65001");  //使用以下代码可将代码页字符集更改为utf-8：
    static int m1 = 2, m2;
    int i = 1;
    char *p;
    char str[10] = "hello";
    char *q = "hello";
    p = (char *) malloc(100);
    free(p);
    printf("栈区-变量地址  i:%p\n", &i);
    printf("                p:%p\n", &p);
    printf("              str:%p\n", str);
    printf("                q:%p\n", &q);
    printf("堆区地址-动态申请:%p\n", p);
    printf("全局外部有初值 k1:%p\n", &k1);
    printf("    外部无初值 k2:%p\n", &k2);
    printf("静态外部有初值 k3:%p\n", &k3);
    printf("    外静无初值 k4:%p\n", &k4);
    printf("  内静态有初值 m1:%p\n", &m1);
    printf("  内静态无初值 m2:%p\n", &m2);
    printf("文字常量地址    :%p, %s\n", q, q);
    printf("程序区地址      :%p\n", &main);
}
