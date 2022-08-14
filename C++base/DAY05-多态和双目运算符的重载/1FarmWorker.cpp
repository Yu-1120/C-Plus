/*01-���ؼ̳У���̳���ҵ*/
#include <iostream>
#include <cstring>

using namespace std;

//��߲㸸��
class Person{
public:
    Person(const char *name=NULL)
    {
        if(name){
            this->name = new char[strlen(name)+1];
            strcpy(this->name,name);
        }
        else{//Ĭ���� ---- ����
            this->name = new char[strlen("����")+1];
            strcpy(this->name,"����");
        }
    }

    Person(const Person &p)
    {
        this->name = new char[strlen(p.name)+1];
        strcpy(this->name,p.name);
    }

    ~Person()
    {
        delete[] this->name;
    }

    //���нӿ�
    const char *get_name()
    {
        return this->name;
    }

private:
    char *name;
};

class Worker:virtual public Person{
public:
    Worker(const char *name=NULL,double salary=4000.0):
        Person(name),salary(salary)
    {

    }

    //���нӿ�
    double get_salary()
    {
        return this->salary;
    }

private:
    double salary;
};

class Farmer:virtual public Person{
public:
    Farmer(const char *name=NULL,double area=300.0):
        Person(name),area(area)
    {

    }

    //���нӿ�
    double get_area()
    {
        return this->area;
    }

private:
    double area;
};

//ũ����
class FarmWorker:virtual public Worker,virtual public Farmer{
public:
    FarmWorker(const char *name=NULL,double salary=4000.0,double area=300.0):
        Person(name),Worker(name,salary),Farmer(name,area)
    {

    }

    /*
    FarmWorker(const FarmWorker &f):Person(f),Worker(f),Farmer(f)
    {
        cout<<"xxx"<<endl;
    }
    */

    void show()
    {
        cout<<this->get_name()<<":"<<this->get_salary()<<":"<<this->get_area()<<endl;
    }
};

int main()
{
    FarmWorker fw("����ǿ",10000.0,1500.0);
    fw.show();

    FarmWorker fw1 = fw;

    return 0;
}
