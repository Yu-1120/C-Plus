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

** ��������ָ�룺ָ������ͣ�ָ��ָ������ͣ�ָ��ָ������

** ptr �������� int* �� ָ��������� int , ָ�� arr

***/
    ptr += 2;//int*2=4*2=8�ӵ�8����ʼ
    printf("%c\n", *ptr);//a
    *ptr = 'abcd';//�޸��˵�8�����4����ֵ

    for (int i = 0; i < 20; i++) {
//        printf("%c\n", *ptr);
        printf("%c", a[i]); //You_are_dcbarl

    }

    getchar();

}