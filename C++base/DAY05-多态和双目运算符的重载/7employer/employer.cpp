#include <cstring>
#include "employer.hpp"


Object::Object(const char *s)
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

//��������
Object::Object(const Object &o)
{
    cout<<"Object(const Object &o)"<<endl;
    if(strlen(o.p)){
        this->p = new char[strlen(o.p)+1];
        strcpy(this->p, o.p);
    }
    else{//�մ�
        this->p = new char[10];
        memset(this->p,0,10);
    }
}

Object::~Object()
{
    cout<<"~Object()"<<endl;
    delete[] this->p;
}

//��ȡ
const char *Object::get_p()
{
    return this->p;
}


//��ͨ����
Person::Person(const char *s,string name):Object(s),p_name(name)
{
    cout<<"Person()"<<endl;
}

//��ȡ
string Person::get_pname()
{
    return this->p_name;
}


//��˾��
Comp::Comp(const char *s,string name):Object(s),c_name(name)
{
    cout<<"Comp()"<<endl;
}

//��ȡ
string Comp::get_cname()
{
    return this->c_name;
}


//Ա����
Employer::Employer(const char *s,string pname,string cname,double salary):
    Object(s),Person(s,pname),Comp(s,cname),salary(salary)
{
    cout<<"Employer()"<<endl;
}

void Employer::show()
{
    cout<<this->get_pname()<<":"<<this->get_cname()<<":"<<
          this->get_p()<<":"<<this->salary<<endl;
}

