/*01-C++�ı�׼�������*/
#include <iostream>

using namespace std;

int main()
{
    int num = 10,num_1 = 20;
    const char *s = "byebye";
    int *p_num = &num;
    double d_num = 3.14;
    char buf[1024] = {};

    //std::cout << "�������!" << std::endl;
    //cout << "�������!" << endl;
    cout<<num<<endl;
    cout<<s<<endl;//���ָ������
    cout<<p_num<<endl;//���ָ��ĵ�ַ
    cout<<d_num<<endl;

    //�������
    cout<<num<<" "<<p_num<<" "<<d_num<<endl;

    //��׼����
    //cout<<"������һ������:";
    cout<<"������һ��������:";
    //cin>>num;
    cin>>d_num;
    cout<<"d_num = "<<d_num<<endl;

    cout<<"��������������:";
    cin>>num>>num_1;
    cout<<"num = "<<num<<endl;

    cout<<"������һ������:";
    cin>>buf;
    cout<<"buf = "<<buf<<endl;

    return 0;
}
