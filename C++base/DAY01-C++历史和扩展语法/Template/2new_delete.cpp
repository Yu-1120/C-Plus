/*02-C++���ڴ����*/
#include <iostream>

using namespace std;

int main()
{
    //����
    //int *p_num = new int;
    //���䲢��ʼ��
    int *p_num = new int(456);

    //������ͬ���͵������ռ�
    int *p_arr = new int[5];//����5��int�������ռ�

    //*p_num = 100;
    p_arr[0] = 1;
    p_arr[1] = 2;
    p_arr[2] = 3;
    p_arr[3] = 4;
    p_arr[4] = 5;

    cout<<p_num<<endl;
    cout<<"*p_num = "<<*p_num<<endl;

    for(int i=0;i<5;i++)
        cout<<p_arr[i]<<" ";
    cout<<endl;

    //�ͷ�
    delete p_num;
    delete[] p_arr;

    return 0;
}
