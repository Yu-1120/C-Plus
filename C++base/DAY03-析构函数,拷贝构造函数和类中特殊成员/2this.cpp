/*02-this指针*/
#include <iostream>
#include <cstring>

using namespace std;

//类的前置声明
class Animal;

//函数声明
void show_Animal(Animal &an);

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
    }

    //成员函数
    void run()
    {
        cout<<this->name<<" run!"<<endl;
    }


    Animal *show()
    {
        //this作为函数参数
        show_Animal(*this);
        cout<<this->name<<":"<<this->age<<":"<<this->weight<<endl;
        //this作为返回值
        return this;
    }

private:
    string name;//C++提供的字符串类 =
    int age;
    double weight;
};

void show_Animal(Animal &an)
{
    cout<<"show_Animal"<<endl;
    an.run();
}

int main()
{
    //Animal an("元宵",4,11.2);
    //an.run();

    Animal *pa = new Animal("端午",5,9.4);
    //pa->show()->show()->show()->run();
    pa->show();

    delete pa;
    return 0;
}
