#ifndef EMPLOYER_HPP
#define EMPLOYER_HPP

#include <iostream>
using namespace std;

class Object{
public:
    Object(const char *s=NULL);
    //��������
    Object(const Object &o);
    ~Object();

    //��ȡ
    const char *get_p();

private:
    char *p;//˵����Ϣ
};

//��̳�
class Person:virtual public Object
{
public:
    Person(const char *s=NULL,string name="xxx");
    //��ȡ
    string get_pname();

private:
    string p_name;//����
};

class Comp:virtual public Object
{
public:
    Comp(const char *s=NULL,string name="xxx");
    //��ȡ
    string get_cname();

private:
    string c_name;//��˾��
};

//Ա����
class Employer:virtual public Person,virtual public Comp{
public:
    Employer(const char *s=NULL,string pname="xxx",string cname="xxx",double salary=1000.0);
    void show();

private:
    double salary;
};

#endif // EMPLOYER_HPP
