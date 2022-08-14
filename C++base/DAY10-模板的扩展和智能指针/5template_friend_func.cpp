/*05 - ��ģ��ĺ���ģ����Ԫ*/
#include <iostream>
#include <cstring>
#include <typeinfo>

using namespace std;

//ģ�������
template <typename K>
void count();

template <typename N>
void report(N &n);


//��ģ��
template <typename T>
class FriendTp{
public:
    FriendTp(T t):t(t){};

    //��Ԫ����ģ��
    //Լ���� ----- ʹ��T���Ͳ���
    friend void count<T>();
    friend void report</*FriendTp<T>*/>(FriendTp<T> &tt);

    //��Լ���� ----- ��ʹ��T����
    template<typename T1,typename T2>
    friend void show(T1 &t1,T2 &t2);

private:
    T t;
};

//����ģ��
template <typename K>
void count()
{
    cout<<"size = "<<sizeof(FriendTp<K>)<<endl;
}

template <typename N>
void report(N &n)
{
    cout<<n.t<<endl;
}

template<typename T1,typename T2>
void show(T1 &t1,T2 &t2)
{
    cout<<t1.t<<","<<t2.t<<endl;
}

int main()
{
    count<int>();

    FriendTp<int> ft1(10);
    report(ft1);

    FriendTp<double> ft2(22.2);
    report(ft2);

    //��Լ����
    show(ft1,ft2);

    return 0;
}
