/*05-��������*/
#include <iostream>

using namespace std;

template <typename T>
void myqsort(T *arr, int n)
{
    int L = 0;
    int R = n - 1;

    //�˳�����
    if (n <= 1)
        return;

    T tmp = arr[L];
    while (L < R)
    {
        //�������Ϊ��׼���Ƚ��ұ�
        while (L < R && arr[R] >= tmp)
            R--;
        arr[L] = arr[R];
        //�Ƚ����
        while (L < R && arr[L] <= tmp)
            L++;
        arr[R] = arr[L];
    }

    //����׼�Ż��غ�λ��
    arr[L] = tmp;

    //�ݹ�ǰ��ķ���ͺ���ķ���
    myqsort(arr, L);
    myqsort(arr + L + 1, n - L - 1);
}

//��ӡ
template <typename T>
void print(T *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//���㳤�ȵ�
template <typename T>
int count(T &n)
{
    int s1 = sizeof(n);
    int s2 = sizeof(n[0]);
    return s1 / s2;
}
int main()
{
    int a[] = {5, 9, 6, 8, 4, 3, 7, 1, 15, 2};

    myqsort(a, count(a));
    print(a, 10);

    return 0;
}
