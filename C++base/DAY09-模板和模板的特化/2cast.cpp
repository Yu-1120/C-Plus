/*02 - C++������ת��*/
#include <iostream>

using namespace std;

class Animal{
public:
    Animal(){}

    virtual void show()
    {
        cout<<"Animal show"<<endl;
    }

    int num;
};

class Dog:public Animal{
public:
    Dog(){}

    virtual void show()
    {
        cout<<"Dog show"<<endl;
    }
};


class Cat:public Animal{
public:
    Cat(){}

    virtual void show()
    {
        cout<<"Cat show"<<endl;
    }
};

struct A{
    short a;
    short b;
};

int main()
{
    Animal *pa = new Cat;
    pa->show();

    //���ж�̬�Եĸ��ӹ�ϵ����֮���ת��
    Cat *pc = dynamic_cast<Cat *>(pa);
    pc->show();

    Animal an;
    const Animal *paa = &an;
    //paa->num = 10;//���ܸ���
    //ȥ��paa��const����
    Animal *pbb = const_cast<Animal *>(paa);
    pbb->num = 10;
    //���pbb��const����
    const Animal *pcc = const_cast<const Animal *>(pbb);
    //pcc->num = 10;//���ܸ���

    //��ӽ�ǿת��ת��
    int num = 111;
    double d_num = 3.14;

    float f = static_cast<float>(num);
    std::cout << f << std::endl;
   
    f = static_cast<float>(d_num);
    std::cout << f << std::endl;

    //���ڴ���ص�Σ�յ�ת��
    int value = 0x10acdf32;
    A *p = reinterpret_cast<A *>(&value);
    cout<<hex<<p->a<<endl;
    cout<<hex<<p->b<<endl;

    return 0;
}
