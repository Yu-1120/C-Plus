/*05-���麯���ͳ�����*/
#include <iostream>

using namespace std;

//(��)������
class Animal{
public:
    //���麯��
    virtual void show()=0;
    virtual void run()=0;
    virtual void eat()=0;
};

class Dog:public Animal{
public:
    //ʵ�ָ��������еĴ��麯��
    virtual void show()
    {
        cout<<"Dog show"<<endl;
    }

    virtual void run()
    {
        cout<<"Dog Run"<<endl;
    }

    virtual void eat()
    {
        cout<<"Dog eat meat"<<endl;
    }
};

int main()
{
    //�����಻�ܹ������
    //Animal an;
    Dog dg;
    dg.show();
    dg.run();
    dg.eat();

    return 0;
}
