/*04-�ַ��������������*/
#include <iostream>
#include <cstring>

using namespace std;

class Date{
public:
    Date(int year=2022,int month=3,int day=14,const char *s="hello"):year(year),month(month),day(day)
    {
        this->str = new char[strlen(s)+1];
        strcpy(this->str,s);
        cout<<"Date()"<<endl;
    }


    //��������
    Date(const Date &dt)
    {
        cout<<"Date(const Date &dt)"<<endl;
        //ʹ�ò������������ȥ��ʼ���½����������
        //��ָ�����͵ĳ�Աֱ�ӿ�����ֵ
        this->year = dt.year;
        this->month = dt.month;
        this->day = dt.day;

        //ָ�����͵ĳ�ԱҪ���·���ռ䣬����ָ�������
        this->str = new char[strlen(dt.str)+1];
        strcpy(this->str,dt.str);
    }


    ~Date()
    {
        cout<<"~Date()"<<endl;
        delete[] this->str;
    }

    void show()
    {
        cout<<this->str<<":"<<this->year<<"-"<<this->month<<"-"<<this->day<<endl;

    }

    //�޸�str
    void set_str(const char *s)
    {
        strcpy(this->str,s);
    }

private:
    int year;
    int month;
    int day;
    char *str;
};

Date show(Date dt)//��������
{
    cout<<"show Date"<<endl;
    return dt;//����һ��dt����
}

int main()
{
    Date dt1(2019,12,30,"welcome to GEC");
    dt1.show();

    //show(dt1);//Date dt = dt1;
    Date dt2 = dt1;//��������
    //Date dt2;
    //dt2 = dt1;
    dt2.show();

    dt1.set_str("byebye");
    dt1.show();
    dt2.show();

    return 0;
}
