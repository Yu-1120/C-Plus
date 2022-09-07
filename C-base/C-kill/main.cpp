#include <stdio.h>
void change(int a);
int max(int, int);
int fun()
{
    int a = 6;
    printf("a=%d\n", a);

    change(a);

    printf("a=%d", a);
}
void change(int a)
{

    a = 7;
}

int pointer_size()
{
    int b[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int *b0 = &b[0];
    int *b1 = &b[1];
    int *b9 = &b[9];
    printf("b9-b0=%d", b9 - b0);
    printf("b0-b1=%d", b0 - b1);
}
int fun_pointer()

{ // define function pointer
    int (*p)(int, int);
    //将max赋值给p
    p = max;
    int c = (*p)(200, 20);
    printf("max=%d", c);
}

int max(int x, int y)
{
    int z;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}

int main()
{
    fun();

    return 0;
}
