/*09-�ַ�����ľ�̬����*/
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

    //��Ԫ����������
    friend void setA(A &a);
    //��Ԫ�������
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
