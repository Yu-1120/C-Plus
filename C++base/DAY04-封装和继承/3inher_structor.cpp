/*03-�̳��еĹ��캯������������*/
#include <iostream>
#include <cstring>

using namespace std;

class A{
public:
    A(){cout<<"A()"<<endl;}
    A(int a,int b){cout<<"A(int,int)"<<endl;}
    ~A(){cout<<"~A()"<<endl;}

private:
    int x;
    int y;
};

class B:public A{
public:
    B(){cout<<"B()"<<endl;}
    B(int a,int b,int c):A(a,b)/*������Ĺ��캯������*/,z(c){cout<<"B(int,int,int)"<<endl;};
    ~B(){cout<<"~B()"<<endl;}

private:
    int z;
};

int main()
{
    //B b;
    B b(1,2,3);

    return 0;
}
