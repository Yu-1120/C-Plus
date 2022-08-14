/*08-����Animal��*/
#include <iostream>
#include <cstring>

using namespace std;

class A{
public:
    A(){cout<<"A()"<<endl;}
};

class Animal{
public:
    //���캯��
    Animal()
    {
        cout<<"Animal()"<<endl;
        strcpy(name,"�±�");
        age = 3;
        weight = 5.6f;
    }


    //���캯��������
    Animal(const char *m_name,int m_age=3,float m_weight=10.1f)
    {
        cout<<"Animal(const char *,int,float)"<<endl;
        strcpy(name,m_name);
        age = m_age;
        weight = m_weight;
    }

    void show()
    {
        cout<<name<<":"<<age<<":"<<weight<<endl;
    }

    //����name
    void set_name(const char *s)
    {
        strcpy(name,s);
    }

    //����age
    void set_age(int a)
    {
        age = a;
    }

    //��������
    void set_weight(float w)
    {
        weight = w;
    }

protected:
    float weight;
private:
    int age;
    char name[20];
    A a;
};

int main()
{
    //Animal an;//�����޲ι��캯��
    //an.set_name("С�ɷ�");
    //an.set_age(4);
    //an.set_weight(14.4f);

    Animal an("С�ɷ�"/*,5,13.2f*/);
    //Animal *pa = new Animal;
    Animal *pa = new Animal("��Բ",7,24.5f);

    an.show();

    pa->show();

    delete pa;
    return 0;
}
