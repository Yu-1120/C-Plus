/*07 - ����ֵ���ͺ���,using�����*/
#include <iostream>
#include <array>
#include <typeinfo>

using namespace std;

auto add(double a,int b) -> double//����double
{
    return a+b;
}

//ģ����ʹ��
template <typename T,typename K>
auto func(T t,K k) -> decltype(t*k)
{
    return t*k;
}

//ʹ��using��ģ�������
template <typename T>
using arr12 = array<T,12>;

int main()
{
    cout<<add(1.1,3)<<endl;
    cout<<func(1.1,3)<<endl;

    array<int,10> ac = {1,2,3,4,5,6,7,8,9,20};
    //using�����������
    using IT = array<int,10>::iterator;
    IT it = ac.begin();
    cout<<*it<<endl;

    arr12<double> ad;//array<double,12>
    arr12<string> as;//array<string,12>

    return 0;
}
