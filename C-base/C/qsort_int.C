
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//比较函数
int compare(const void *a, const void *b)
{
    // return (*(int *)a) - (*(int *)b); //升序排序
    return (*(int *)b) - (*(int *)a); //降序排序
}

//打印数组
void print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
    //工具库已经为我们提供好了快速排序的实现函数，直接用就完事
    //参数有点多，第一个是待排序数组，第二个是待排序的数量（一开始就是数组长度），第三个是元素大小，第四个是排序规则（我们提供函数实现）

    int len = sizeof(arr) / sizeof(arr[0]); //数组长度
    qsort(arr, len, sizeof(int), compare);
    print(arr, len);
    return 0;
}