/*06-�ṹ����������*/
#include <iostream>
#include <unistd.h>
#include <iomanip>

using namespace std;

//ʱ��ṹ��
struct Time{
    //���� ----- ��Ա����
    int hour;//ʱ
    int min;//��
    int sec;//��

    //���� ----- ��Ա����
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
    //ʹ�ýṹ�����͹�����󣬲���Ҫ��struct
    Time t;
    //���ʳ�Ա����
    t.hour = 14;
    t.min = 11;
    t.sec = 30;

    //���ʳ�Ա����
    //t.print_time();
    t.set_time();
    while(1){
        t.print_time();
        sleep(1);
        t.run();
    }

    return 0;
}
