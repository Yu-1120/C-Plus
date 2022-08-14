/*09-字符串类的静态函数*/
#include <iostream>
#include <cstring>

using namespace std;

class A{
public:
    int x;
protected:
    int y;
private:
    int z;

    //友元函数的声明
    friend void setA(A &a);
    //友元类的声明
    friend class B;
};

class B{
public:
    void show()
    {
        cout<<a.x<<":"<<a.y<<":"<<a.z<<endl;
    }

private:
    A a;
};

void setA(A &a)
{
    a.x = 10;
    a.y = 20;
    a.z = 30;
}

int main()
{
    A a;
    setA(a);

    B b;
    b.show();

    return 0;
}
