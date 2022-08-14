/*03 - ��ģ��ķ����Ͳ�����ģ�����*/
#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

template <typename T1,int T2=10/*�����Ͳ���*/>
class A{
public:
    static void print_type()
    {
        cout<<typeid(T1).name()<<" "
            <<T2<<endl;
    }
};

//��ģ�� ----- ���������T���͹��죬�������show��Ա����
template <typename T>
class King{
public:
    King(T t):t(t){}

    void show()const
    {
        cout<<this->t<<endl;
    }

private:
    T t;
};

//ģ����ģ�����
template <template <typename T> class Thing=King/*ģ�����*/,typename K=int>
class Crab{
public:
    //Thingģ�����ʹ��T���͹���
    Crab(int i=0,double d=0.0):t1(i),t2(d){}

    //Thing����Ҫ��show��Ա����
    void show()const
    {
        t1.show();
        t2.show();
    }

private:
    Thing<int> t1;
    Thing<double> t2;
    K k;
};


int main()
{
    /*
    const int num = 99;

    A<int,100>::print_type();
    A<int,num>::print_type();
    A<int>::print_type();
    */

    Crab<King> cb(14,31.4);
    cb.show();

    return 0;
}
