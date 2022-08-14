/*03-C++���ַ�����*/
#include <iostream>
#include <sstream>

using namespace std;

class Date{
public:
    Date(int y=2022,int m=3,int d=21):year(y),month(m),day(d){}

    friend ostream& operator<<(ostream &os,const Date &dt)
    {
        return os<<dt.year<<"-"<<dt.month<<"-"<<dt.day;
    }

private:
    int year;
    int month;
    int day;
};


int main()
{
    string name("�ŷ�");
    int age = 21;

    //�ַ��������
    ostringstream oss;
    //������д���ַ�����
    //cout<<name<<":"<<age<<endl;
    oss<<name<<":"<<age;
    cout<<oss.str()<<endl;

    //�ַ���������
    istringstream iss("���� 30");
    //cin>>name>>age;
    iss>>name>>age;
    cout<<name<<":"<<age<<endl;

    ostringstream oss1;
    Date dt;
    //cout<<dt<<endl;
    oss1<<dt;//oss1<<dt.year<<"-"<<dt.month<<"-"<<dt.day;
    cout<<oss1.str()<<endl;

    return 0;
}