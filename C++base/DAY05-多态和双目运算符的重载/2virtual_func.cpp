/*02-�麯�����麯����*/
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

typedef void (*pfunc_t)();//Ϊ����ָ�����������

int main()
{
    /*
    //û�г�Ա�����������Ͷ�����ռ�ռ��С��1
    //cout<<sizeof(Animal)<<endl;
    Animal an;
    //long addr = *(long *)&an;//ȡ������ǰ8���ֽڵ�����
    //pfunc_t *pt = (pfunc_t *)addr;//ת��Ϊ�麯�����׵�ַ����

    pfunc_t *pt = *(pfunc_t **)&an;//ȡ������ǰ8���ֽڵ����� --- �麯����ĵ�ַ
    //�����麯��
    pt[0]();//an.show();
    pt[1]();//an.eat();

    Dog dg;

    pt = *(pfunc_t **)&dg;//ȡ������ǰ8���ֽڵ����� --- �麯����ĵ�ַ
    //�����麯��
    pt[0]();//an===>show();
    pt[1]();//dg===>eat();
    */
    //Animal *pa = new Animal;
    //Dog *pd = new Dog;
    //���麯�����������ͼ�¼�������
    Animal *pa = new Dog;
    pa->show();
    pa->run();
    pa->eat();

    delete pa;
    return 0;
}
