#include <iostream>
#include <cstring>

using namespace std;
//---------------------����ʵ��------------------------------
template<typename T>
int Searcher<T>::operator()(T *arr, int from, int to, T dt) {
    //�����м�Ԫ���±�
    int mid = (from + to) / 2;

    //2.�ݹ��������
    if (from > to)
        return -1;

    //1.�������
    if (arr[mid] == dt)
        return mid;
    else if (arr[mid] > dt)//ǰ�ӱ����
        return operator()(arr, from, mid - 1, dt);
    else
        return operator()(arr, mid + 1, to, dt);
}
//---------------------����ʵ��------------------------------
//��Ա�ػ�
template<>
int Searcher<const char *>::operator()(const char **arr, int from, int to, const char *dt) {
    //�����м�Ԫ���±�
    int mid = (from + to) / 2;

    //2.�ݹ��������
    if (from > to)
        return -1;

    //1.�������
    if (strcmp(arr[mid], dt) == 0)
        return mid;
    else if (strcmp(arr[mid], dt) > 0)//ǰ�ӱ����
        return operator()(arr, from, mid - 1, dt);
    else
        return operator()(arr, mid + 1, to, dt);
}

