//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>

int main() {

    int aa[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr1 = (int *) (&aa + 1);//����ptr1-->&aa[3][0]
    int *ptr2 = (int *) (*(aa + 1));//aa��ʾ�׵�ַ�����ڶ�ά������ǵ�һ�е�ַ
    //����*(aa+1)��ת����int*����aa[1][0],Ҳ�������Ϊ*(aa+1)=aa[1]
    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
    return 0;


}