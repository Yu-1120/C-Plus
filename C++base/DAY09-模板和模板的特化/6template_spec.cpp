/*06 - ����ģ�����ģ����ػ�*/
#include <iostream>
#include <cstring>

using namespace std;

//����ģ�� ---- ð������
template<typename T>
void mysort(T *arr, int n) {
    cout << "ԭʼģ��" << endl;

    for (int i = 0; i < n - 1; i++) {
        bool flag = true;
        //�����Ƚ�
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                T tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

                flag = false;
            }
        }

        //û�з����������������
        if (flag)
            break;
    }
}

//����ģ����ػ� -----   const char *
template<>
void mysort<const char *>(const char **arr, int n) {
    cout << "�ػ�ģ��" << endl;

    for (int i = 0; i < n - 1; i++) {
        bool flag = true;
        //�����Ƚ�
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                const char *tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

                flag = false;
            }
        }

        //û�з����������������
        if (flag)
            break;
    }
}

//��ģ��ʵ�ֺ�����������
template<typename T>
class Sortor {
public:
    //�������� --- ��������
    void operator()(T *arr, int n) {
        int L = 0;
        int R = n - 1;

        //�˳�����
        if (n <= 1)
            return;


        T tmp = arr[L];
        while (L < R) {
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
        operator()(arr, L);
        operator()(arr + L + 1, n - L - 1);
    }
};

//��ģ����ػ�
template<>
class Sortor<const char *> {
public:
    //�������� --- ��������
    void operator()(const char **arr, int n) {
        int L = 0;
        int R = n - 1;

        //�˳�����
        if (n <= 1)
            return;


        const char *tmp = arr[L];
        while (L < R) {
            //�������Ϊ��׼���Ƚ��ұ�
            while (L < R && strcmp(arr[R], tmp) >= 0)
                R--;
            arr[L] = arr[R];
            //�Ƚ����
            while (L < R && strcmp(arr[L], tmp) <= 0)
                L++;
            arr[R] = arr[L];
        }

        //����׼�Ż��غ�λ��
        arr[L] = tmp;

        //�ݹ�ǰ��ķ���ͺ���ķ���
        operator()(arr, L);
        operator()(arr + L + 1, n - L - 1);
    }
};


//��ӡ
template<typename T>
void print(T *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {5, 9, 6, 8, 4, 7, 1, 15, 2};
    double d_a[] = {3.9, 6.8, 4.1, 7.5, 3.6, 8.9, 2.4, 9.7, 1.3};
    string str_a[] = {"welcome", "template", "UK", "byebye", "Japan"};
    const char *str_a1[] = {"welcome", "template", "UK", "byebye", "Japan"};

    /*
    mysort(a,9);
    print(a,9);
    mysort(d_a,9);
    print(d_a,9);
    mysort(str_a,5);
    print(str_a,5);
    mysort(str_a1,5);
    print(str_a1,5);
    */

    Sortor<int> si;
    si(a, 9);
    print(a, 9);

    Sortor<double> sd;
    sd(d_a, 9);
    print(d_a, 9);

    Sortor<string> ss;
    ss(str_a, 5);
    print(str_a, 5);

    Sortor<const char *> sc;
    sc(str_a1, 5);
    print(str_a1, 5);

    return 0;
}