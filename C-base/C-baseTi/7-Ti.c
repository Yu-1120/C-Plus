//
// Created by 11868 on 2022/8/13.
//
#include<stdio.h>

int main() {

    char *a[] = {"It's", "C Plus", "wecat"};
    //ָ�������ģ�����ÿ��Ԫ����char*

    char **pa = a;
    //*pa��*������������ָ�룬ָ���������char*


    pa++;
    //ָ��ڶ����ǡ�a���ĵ�ַ
    printf("%s\n", *pa);//"at"

    return 0;

}