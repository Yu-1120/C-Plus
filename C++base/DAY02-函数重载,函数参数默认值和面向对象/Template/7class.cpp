/*07-��(class)��������*/
#include <iostream>
#include <unistd.h>
#include <iomanip>

using namespace std;

//ʱ����
class Time{
    //���� ----- ��Ա����
private://˽�г�Ա
    int hour;//ʱ
    int min;//��
protected://������Ա
    int sec;//��

public://���г�Ա
    //���캯��
    Time(int h=23,int m=59,int s=55):hour(h),min(m),sec(s)
    {
        cout<<"Time()"<<endl;
    }

    //���� ----- ��Ա����

    //�����Ҫ����˽�г�Ա�������ṩ����ӿ�
    int get_hour()
    {
        return hour;
    }

    void set_hour(int h)
    {
        hour = h;
    }

    //����ʱ��
    void set_time(int h=23,int m=59,int s=55)
    {
        hour = h;
        min = m;
        sec = s;
    }

    //��ӡʱ��
    void print_time()
    {
        cout<<setw(2)<<setfill('0')<<hour<<":"
            <<setw(2)<<setfill('0')<<min<<":"
            <<setw(2)<<setfill('0')<<sec<<"\r";
    }

    //����
    void run()
    {
        sec++;
        if(sec==60){
            sec = 0;
            min++;
            if(min==60){
                min = 0;
                hour++;
                if(hour==24){
                    hour = 0;
                }
            }
        }
    }
};

int main()
{
    //ʵ������������
    Time t;
    Time *pt = new Time;

    //t.hour = 14;//˽�г�Ա���ⲻ�ܷ���
    //t.sec = 10;//������Ա���ⲻ�ܷ���

    //pt->set_time();
    pt->print_time();//���г�Ա������Է���
    cout<<endl;
    pt->set_hour(10);
    cout<<pt->get_hour()<<endl;

    delete pt;
    return 0;
}
