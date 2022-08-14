/*02-�̳�*/
#include <iostream>
#include <cstring>

using namespace std;

class Animal{
public:
    Animal(string name="С�ɷ�", int age=5):name(name),age(age)
    {

    }

    void show()
    {
        cout<<this->name<<":"<<this->age<<endl;
    }

protected:
    string name;//��������������ڷ���
private:
    int age;
};

//Dog�̳�Animal
class Dog:public Animal{
public:
    Dog(string name="��",int age=5,double weight=23.4):
        Animal(name,age),weight(weight)
    {

    }

    void dogfunc()
    {
        this->show();
        cout<<this->weight<<" ����!"<<endl;
    }

private:
    double weight;
};

//Cat���м̳�Animal ----- �õ�Animal����������
class Cat:public Animal{
public:
    Cat(string name="��Բ",int age=3,string color="yellow"):Animal(name,age),color(color)
    {

    }

    //�����Ĺ���
    void catfunc()
    {
        this->show();
        cout<<this->color<<"ץ����!"<<endl;
    }

private:
    //��������
    string color;
};

//LiHuaCat�̳�Cat
class LiHuaCat:public Cat{
public:
    LiHuaCat(string name="������",int age=3,string color="����",string country="�й�"):
        Cat(name,age,color),country(country)
    {

    }

    void LiHuafunc()
    {
        this->catfunc();
        cout<<"����:"<<this->country<<" ����"<<endl;
    }

private:
    string country;
};

int main()
{
    //Cat ct("����",7,"��ɫ");
    //ct.catfunc();
    //�̳и���ĳ�Ա����
    //ct.show();

    Dog dg("����",2,32.1);
    dg.dogfunc();
    cout<<endl;

    LiHuaCat lhc("����",7,"��ɫ","����");
    lhc.LiHuafunc();

    return 0;
}
