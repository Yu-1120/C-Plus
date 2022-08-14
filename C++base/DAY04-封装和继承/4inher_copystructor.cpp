/*04-继承中的拷贝构造*/
#include <iostream>
#include <cstring>

using namespace std;

class A{
public:
    A()
    {
        cout<<"A()"<<endl;
        this->pdata = new char[10];
        memset(this->pdata, 0, 10);
    }

    //拷贝构造
    A(const A &a)
    {
        cout<<"A(const A &a)"<<endl;
        this->pdata = new char[10];
        memcpy(this->pdata,a.pdata,10);
    }

    ~A()
    {
        cout<<"~A()"<<endl;
        delete[] this->pdata;
    }

private:
    char *pdata;
};

class B:public A{
public:
    B()
    {
        cout<<"B()"<<endl;
        this->abc = new char[10];
        memset(this->abc, 0, 10);
    }

    //子类拷贝构造 --- 通过初始化参数列表调用父类的拷贝构造
    B(const B &b):A(b)
    {
        cout<<"B(const B &b)"<<endl;
        this->abc = new char[10];
        memcpy(this->abc,b.abc,10);
    }

    ~B()
    {
        cout<<"~B()"<<endl;
        delete[] this->abc;
    }

private:
    char *abc;
};

int main()
{
    B b1;
    B b2 = b1;

    return 0;
}
