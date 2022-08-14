#include <iostream>
#include "mytime.hpp"
#include <iomanip>

using namespace std;

//������ʵ�� ----- ������ǰ���������������
mytime::mytime(int h,int m,int s):hour(h),min(m),sec(s)//��ʼ�������б�д��ʵ����
{
    cout<<"mytime()"<<endl;
}

mytime::~mytime()
{
    cout<<"~mytime()"<<endl;
}

void mytime::print_time()
{
    cout<<setw(2)<<setfill('0')<<hour<<":"
                <<setw(2)<<setfill('0')<<min<<":"
                <<setw(2)<<setfill('0')<<sec<<"\r";
}

void mytime::run()
{
    this->sec++;
    if(this->sec==60){
        this->sec = 0;
        this->min++;
        if(this->min==60){
            this->min = 0;
            this->hour++;
            if(this->hour==24){
                this->hour = 0;
            }
        }
    }
}
