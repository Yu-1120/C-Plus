/*03-����*/
#include <iostream>

using namespace std;

int main()
{
    int num = 10,num_1 = 123;
    //����
    int& r_num = num;//�����ʼ��
    cout<<"num = "<<num<<endl;
    cout<<"r_num = "<<r_num<<endl;

    //num = 111;
    //r_num = 222;
    r_num = num_1;//�޸����õ�ֵ
    cout<<"num = "<<num<<endl;
    cout<<"r_num = "<<r_num<<endl;
    cout<<&num<<" "<<&r_num<<endl;//��ַ��ͬ

    //����������
    const int& cr = 10;
    cout<<"cr = "<<cr<<endl;
    cout<<"&cr = "<<&cr<<endl;

    return 0;
}
