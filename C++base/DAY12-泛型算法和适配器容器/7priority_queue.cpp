/*06 - ���ȶ��е�ʹ��*/
#include <iostream>
#include <deque>
#include <queue>

using namespace std;

class student{
public:
    student(int id=0,string name="",int age=0):id(id),name(name),age(age){}

    //������ȥ�أ�==�ж�name
    bool operator==(const student &s)const
    {
        return this->name==s.name;
    }

    //Ĭ�ϰ�id��С��������
    bool operator<(const student &s)const
    {
        return this->id<s.id;
    }


    //�Լ���Ϊ�������������Ƚ��� name����
    bool operator()(const student &s1,const student &s2)
    {
        return s1.name<s2.name;
    }

    //�������
    friend ostream& operator<<(ostream &os,const student &s)
    {
        return os<<s.id<<":"<<s.name<<":"<<s.age;
    }

    friend class Compare_age;

private:
    int id;
    string name;
    int age;
};

//��������Ƚ������Ƚ�����
class Compare_age{
public:
    bool operator()(const student &s1,const student &s2)
    {
        return s1.age>s2.age;
    }
};

//��������Ƚ���
class Compare{
public:
    bool operator()(const int &a,const int &b)
    {
        return a>b;
    }
};

int main()
{
   
  

    //priority_queue<student> ps;//Ĭ�ϱȽ���
    //priority_queue<student,vector<student>,student> ps;//�Լ���Ϊ��������Ƚ��������ͣ��ײ���������������
    priority_queue<student,vector<student>,Compare_age> ps;//�ⲿ��������Ƚ���

    ps.push(student(4,"�ŷ�",23));
    ps.push(student(2,"����",26));
    ps.push(student(5,"����",19));
    ps.push(student(1,"����",31));
    ps.push(student(6,"����",50));

    while(!ps.empty()){
        cout<<ps.top()<<endl;;//�����ȳ�
        ps.pop();
    }

    return 0;
}
