/*06-多重继承实现员工类*/
#include <iostream>
#include <cstring>

using namespace std;

class Object{
public:
    Object(const char *s=NULL)
    {
        cout<<"Object()"<<endl;

        if(s){
            this->p = new char[strlen(s)+1];
            strcpy(this->p, s);
        }
        else{
            this->p = new char[10];
            memset(this->p,0,10);
        }
    }

    //拷贝构造
    Object(const Object &o)
    {
        cout<<"Object(const Object &o)"<<endl;
        if(strlen(o.p)){
            this->p = new char[strlen(o.p)+1];
            strcpy(this->p, o.p);
        }
        else{//空串
            this->p = new char[10];
            memset(this->p,0,10);
        }
    }

    ~Object()
    {
        cout<<"~Object()"<<endl;
        delete[] this->p;
    }

    //获取
    const char *get_p()
    {
        return this->p;
    }

private:
    char *p;//说明信息
};

//虚继承
class Person:virtual public Object
{
public:
    Person(const char *s=NULL,string name="xxx"):Object(s),p_name(name)
    {
        cout<<"Person()"<<endl;
    }

    //获取
    string get_pname()
    {
        return this->p_name;
    }

private:
    string p_name;//人名
};

class Comp:virtual public Object
{
public:
    Comp(const char *s=NULL,string name="xxx"):Object(s),c_name(name)
    {
        cout<<"Comp()"<<endl;
    }

    //获取
    string get_cname()
    {
        return this->c_name;
    }

private:
    string c_name;//公司名
};

//员工类
class Employer:virtual public Person,virtual public Comp{
public:
    Employer(const char *s=NULL,string pname="xxx",string cname="xxx",double salary=1000.0):
        Object(s),Person(s,pname),Comp(s,cname),salary(salary)
    {
        cout<<"Employer()"<<endl;
    }

    void show()
    {
        cout<<this->get_pname()<<":"<<this->get_cname()<<":"<<
              this->get_p()<<":"<<this->salary<<endl;
    }

private:
    double salary;
};

int main()
{
    Employer ep("五虎上将","张飞","蜀国",300000.0);
    ep.show();

    Employer ep1 = ep;

    return 0;
}




