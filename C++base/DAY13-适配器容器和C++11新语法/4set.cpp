/*04-���ϺͶ��ؼ��ϵ�ʹ��*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<char> sc;
    multiset<char> msc;

    sc.insert('B');
    sc.insert('A');
    sc.insert('F');
    sc.insert('D');
    sc.insert('N');
    sc.insert('T');
    sc.insert('B');//�������ظ�

    for(set<char>::iterator it=sc.begin();it!=sc.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    msc.insert('B');
    msc.insert('A');
    msc.insert('F');
    msc.insert('D');
    msc.insert('N');
    msc.insert('T');
    msc.insert('B');//�����ظ�

    for(multiset<char>::iterator it=msc.begin();it!=msc.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}
