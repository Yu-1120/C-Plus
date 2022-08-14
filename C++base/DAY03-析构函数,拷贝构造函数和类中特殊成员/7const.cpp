/*07-const对象和const成员*/
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


    void show()const//const成员函数
    {
        this->x = 100;
        cout<<"x:"<<x<<endl;
        cout<<"show()const"<<endl;
    }


private:
    const int num;//const成员变量
    mutable int x;//允许在const成员函数中修改
};

int main()
{
    A a(10,20);
    const A b(66,88);//const对象

    a.show();
    b.show();


    return 0;
}
