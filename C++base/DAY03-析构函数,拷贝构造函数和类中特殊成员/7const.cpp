/*07-const�����const��Ա*/
#include <iostream>
#include <cstring>

using namespace std;

class A{
public:
    A(int n=0,int m=0):num(n),x(m){}

    void show()
    {
        //this->num = 111;
        cout<<"show()"<<endl;
    }


    void show()const//const��Ա����
    {
        this->x = 100;
        cout<<"x:"<<x<<endl;
        cout<<"show()const"<<endl;
    }


private:
    const int num;//const��Ա����
    mutable int x;//������const��Ա�������޸�
};

int main()
{
    A a(10,20);
    const A b(66,88);//const����

    a.show();
    b.show();


    return 0;
}
