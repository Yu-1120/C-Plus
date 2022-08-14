/*03-��̬*/
#include <iostream>

using namespace std;

class Animal{
public:
    //��Ա����
    virtual void show()//�麯��
    {
        cout<<"Animal show"<<endl;
    }

    void run()
    {
        cout<<"Animal run"<<endl;
    }

    virtual void eat()
    {
        cout<<"Animal eat"<<endl;
    }

};

class Dog:public Animal{
public:
    //��д�麯��
    virtual void show()//�麯��
    {
        cout<<"Dog show"<<endl;
    }

    void run()//��������
    {
        cout<<"Dog run"<<endl;
    }

    virtual void eat()
    {
        cout<<"Dog eat bones"<<endl;
    }

};

class Cat:public Animal{
public:
    //��д�麯��
    virtual void show()//�麯��
    {
        cout<<"Cat show"<<endl;
    }

    virtual void eat()
    {
        cout<<"Cat eat fish"<<endl;
    }

};

//����һ��Animal���� ----- ��̬
void animal_gogo(Animal *p)
{
    p->show();
    p->eat();
}

int main()
{
    Animal *pa = new Animal;
    //pa->show();
    //pa->run();
    //pa->eat();
    animal_gogo(pa);
    delete pa;

    //���麯�����������ͼ�¼�������
    pa = new Dog;
    //pa->show();
    //pa->run();
    //pa->eat();
    animal_gogo(pa);
    delete pa;

    pa = new Cat;
    //pa->show();
    //pa->run();
    //pa->eat();
    animal_gogo(pa);
    delete pa;

    Dog dg;
    Animal &ra = dg;
    ra.show();
    //ra.Animal::show();

    return 0;
}
