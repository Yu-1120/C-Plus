/*06 - ��ģ�����ģ����Ԫ*/
#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

//��ģ�������
template <typename N>
class B;

//��ģ��
template <typename T>
class A{
public:
    A(T t):t(t){}

    //��Ԫ��ģ��
    //Լ����
    friend class B<T>;

    //��Լ����
    template <typename K>
    friend class C;

private:
    T t;
};

template <typename N>
class B{
public:
    void func(N n)
    {
        A<int> a(100);
        cout<<a.t<<","<<n<<endl;
    }
};

template <typename K>
class C{
public:
    void func(K k)
    {
        A<int> a(100);
        cout<<a.t<<","<<k<<endl;
    }
};

int main()
{
    B<int> b;
    b.func(11);

    C<double> c;
    c.func(11.1);

    return 0;
}
