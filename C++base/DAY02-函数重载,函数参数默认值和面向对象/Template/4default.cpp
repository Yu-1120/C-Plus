/*04-����������Ĭ��ֵ*/
#include <iostream>

using namespace std;

//����������Ĭ��ֵ���� д��������
int add(int x=100,int y=200,int z=300);

int main()
{
    cout<<add(1,2,3)<<endl;
    cout<<add(1,2)<<endl;
    cout<<add(1)<<endl;
    cout<<add()<<endl;

    return 0;
}

int add(int x,int y,int z)
{
    return x+y+z;
}
