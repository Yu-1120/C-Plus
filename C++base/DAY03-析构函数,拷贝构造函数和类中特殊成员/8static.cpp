/*07-��̬��Ա*/
#include <iostream>
#include <cstring>

using namespace std;

class A{
public:
    int x;
    static int num;//��̬��Ա����

    void show()
    {
        cout<<"show()"<<endl;
    }

    //��̬��Ա����
    static void show1()
    {
        //x = 1;
        //show();//�����Է��ʷǾ�̬��Ա
        A::num = 1;//���Է��ʾ�̬��Ա����

        cout<<"static show()"<<endl;
    }
};

//��̬��Ա���������������ʼ��
int A::num = 11;

int main()
{
    //��̬��Աͨ����������
    A::num = 100;
    cout<<A::num<<endl;
    A::show1();

    A a;
    a.show1();
    a.num = 66;

    A b;
    cout<<b.num<<endl;

    return 0;
}
