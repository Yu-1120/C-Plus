/*03-析构函数*/
#include <iostream>

using namespace std;

class A{
public:
    A(){cout<<"A()"<<endl;}
    ~A(){cout<<"~A()"<<endl;}
};

class Animal{
public:
    //构造函数
    Animal(string name,int age,double weight)
    {
        cout<<"Animal()"<<endl;
        //使用this指针访问同名成员变量
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->a = new A;
    }

    //析构函数
    ~Animal()
    {
        cout<<"~Animal()"<<endl;
        delete a;
    }

    //成员函数
    void run()
    {
        cout<<this->name<<" run!"<<endl;
    }


    Animal *show()
    {
        cout<<this->name<<":"<<this->age<<":"<<this->weight<<endl;
        //this作为返回值
        return this;
    }

private:
    string name;//C++提供的字符串类 =
    int age;
    double weight;
    A *a;//类类型
};


int main()
{
    Animal *pa = new Animal("端午",5,9.4);
    pa->show();

    delete pa;
    return 0;
}
