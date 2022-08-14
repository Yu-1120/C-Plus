/*02-继承*/
#include <iostream>
#include <cstring>

using namespace std;

class Animal{
public:
    Animal(string name="小飞飞", int age=5):name(name),age(age)
    {

    }

    void show()
    {
        cout<<this->name<<":"<<this->age<<endl;
    }

protected:
    string name;//可以在子类和类内访问
private:
    int age;
};

//Dog继承Animal
class Dog:public Animal{
public:
    Dog(string name="妞妞",int age=5,double weight=23.4):
        Animal(name,age),weight(weight)
    {

    }

    void dogfunc()
    {
        this->show();
        cout<<this->weight<<" 看门!"<<endl;
    }

private:
    double weight;
};

//Cat公有继承Animal ----- 得到Animal的所有内容
class Cat:public Animal{
public:
    Cat(string name="汤圆",int age=3,string color="yellow"):Animal(name,age),color(color)
    {

    }

    //新增的功能
    void catfunc()
    {
        this->show();
        cout<<this->color<<"抓老鼠!"<<endl;
    }

private:
    //新增属性
    string color;
};

//LiHuaCat继承Cat
class LiHuaCat:public Cat{
public:
    LiHuaCat(string name="西红柿",int age=3,string color="豹纹",string country="中国"):
        Cat(name,age,color),country(country)
    {

    }

    void LiHuafunc()
    {
        this->catfunc();
        cout<<"产地:"<<this->country<<" 吃鱼"<<endl;
    }

private:
    string country;
};

int main()
{
    //Cat ct("端午",7,"白色");
    //ct.catfunc();
    //继承父类的成员函数
    //ct.show();

    Dog dg("阿黄",2,32.1);
    dg.dogfunc();
    cout<<endl;

    LiHuaCat lhc("桂兰",7,"黑色","美国");
    lhc.LiHuafunc();

    return 0;
}
