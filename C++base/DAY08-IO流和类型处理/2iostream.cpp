/*02-���������*/
#include <iostream>

using namespace std;

int main()
{
    //cout<<"hello";
    //clog<<"hello";
    //cerr<<"hello";

    //while(1);
    cout<<"������һ���ַ�:";
    char ch = cin.get();
    cout.put(ch);

    //���������
    cin.ignore(100,'\n');

    //��һ��
    cout<<"������һ��:";
    char buf[100] = {};
    //���Զ��ո�
    cin.getline(buf,sizeof(buf));
    //cin>>buf;
    cout<<buf<<endl;

    return 0;
}