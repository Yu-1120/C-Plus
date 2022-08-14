/*04-��̬�����ʹ��*/
#include <iostream>
#include <array>

using namespace std;

class Data{
public:
    explicit Data(int d=0):dt(d){}
    friend ostream& operator<<(ostream &os,const Data &d)
    {
        return os<<d.dt;
    }

private:
    int dt;
};

int main()
{
    array<int,5> ai = {2,4,6,8,10};
    array<int,5> ai1 = {1,3,5,7,9};

    //�������
    cout<<"�������:";
    for(array<int,5>::iterator itt=ai.begin();itt!=ai.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    cout<<"��С:"<<ai.size()<<endl;
    cout<<"��Ԫ��:"<<ai.front()<<endl;
    cout<<"βԪ��:"<<ai.back()<<endl;

    //���
    ai.fill(33);
    cout<<"����:";
    for(array<int,5>::iterator itt=ai.begin();itt!=ai.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;
    //����
    ai.swap(ai1);//���ͱ�����ͬ
    cout<<"������ai:";
    for(array<int,5>::iterator itt=ai.begin();itt!=ai.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    cout<<"������ai1:";
    for(array<int,5>::iterator itt=ai1.begin();itt!=ai1.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    //��array�з�Data����
    array<Data,6> ad;
    ad.at(2) = Data(123);
    cout<<"�������:";
    for(array<Data,6>::iterator itt=ad.begin();itt!=ad.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    return 0;
}
