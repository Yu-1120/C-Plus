/*04 - ����ģ��ʵ������*/
#include <iostream>


using namespace std;

//����ģ��
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
    //const char *str_a1[] = {"welcome","template","UK","byebye","Japan"};

    mysort(a, 9);
    print(a, 9);
    mysort(d_a, 9);
    print(d_a, 9);
    mysort(str_a, 5);
    print(str_a, 5);

    //mysort(str_a1,5);
    //print(str_a1,5);

    return 0;
}
