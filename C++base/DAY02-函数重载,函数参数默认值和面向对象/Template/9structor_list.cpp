/*09-��ʼ�������б�*/
#include <iostream>
#include <cstring>

using namespace std;

class Animal{
public:
    //���캯��
    Animal(const char *m_name="Ԫ��",int m_age=3,float m_weight=10.1f,int m_height=50)
            /*��ʼ�������б�*/:age(m_age),weight(m_weight),height(m_height),num(age)
    {
        cout<<"Animal(const char *,int,float)"<<endl;
        strcpy(name,m_name);
        //age = m_age;
        //weight = m_weight;
        //height = m_height;
        //num = m_age;
    }

    void show()
    {
        //num = 7;
        cout<<name<<":"<<age<<":"<<weight<<":"<<height<<":"<<num<<endl;
    }

private:
    float weight;
    int age;
    char name[20];
    const int height;//const��Ա
    int &num;//���ó�Ա
};

int main()
{
    Animal an("С�ɷ�"/*,5,13.2f*/);

    an.show();

    return 0;
}
